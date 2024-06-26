#include "astar.h"
#include <algorithm> // For std::reverse
#include <random>
#include <unordered_map> // For unordered_map
#include <unordered_set>

using namespace std;

int rand_int() {
  random_device rd;  // non-deterministic generator
  mt19937 gen(rd()); // to seed mersenne twister.
  uniform_int_distribution<> dist(
      1, 17); // distribute results between 1 and 6 inclusive.

  return dist(gen);
}

AStar::AStar(int width, int height) : width(width), height(height) {
  grid.resize(height, std::vector<bool>(
                          width, true)); // Initialize grid with no obstacles

  for (int i = 0; i < 10; i++) {

    int x = rand_int();
    int y = rand_int();

    grid[y][x] = false;
  }
}

void AStar::generate_obstacles() {
  int y_size = grid.size();
  int x_size = grid[0].size();

  /* clear */
  for (int x = 0; x < x_size; x++) {
    for (int y = 0; y < y_size; y++) {

      grid[y][x] = true;
    }
  }

  /* set obstacles */
  for (int i = 0; i < 40; i++) {

    int x = rand_int();
    int y = rand_int();

    grid[y][x] = false;
  }
}

std::vector<Node> AStar::findPath(int startX, int startY, int endX, int endY) {
  auto compare = [](const Node &a, const Node &b) {
    return a.fCost() > b.fCost();
  };
  std::priority_queue<Node, std::vector<Node>, decltype(compare)> openList(
      compare);
  std::unordered_map<int, Node>
      openSet; // To quickly check if a node is in the open list

  std::unordered_set<Node, NodeHash> closedList;

  Node start(startX, startY);
  Node end(endX, endY);
  openList.push(start);
  openSet[start.x * width + start.y] = start;

  while (!openList.empty()) {
    Node current = openList.top();
    openList.pop();
    openSet.erase(current.x * width + current.y);
    closedList.insert(current);

    if (current == end) {
      std::vector<Node> path;
      while (current.parent) {
        path.push_back(current);
        current = *current.parent;
      }
      path.push_back(start);
      std::reverse(path.begin(), path.end());
      return path;
    }

    for (Node neighbor : getNeighbors(current)) {
      if (closedList.find(neighbor) != closedList.end())
        continue;

      float tentativeGCost = current.gCost + heuristic(current, neighbor);

      if (openSet.find(neighbor.x * width + neighbor.y) == openSet.end() ||
          tentativeGCost < neighbor.gCost) {
        neighbor.gCost = tentativeGCost;
        neighbor.hCost = heuristic(neighbor, end);
        neighbor.parent = new Node(current);

        if (openSet.find(neighbor.x * width + neighbor.y) == openSet.end()) {
          openList.push(neighbor);
          openSet[neighbor.x * width + neighbor.y] = neighbor;
        }
      }
    }
  }

  return std::vector<Node>(); // No path found
}

std::vector<Node> AStar::getNeighbors(const Node &node) {
  std::vector<Node> neighbors;
  for (int dx = -1; dx <= 1; ++dx) {
    for (int dy = -1; dy <= 1; ++dy) {
      if (dx == 0 && dy == 0)
        continue;
      int nx = node.x + dx, ny = node.y + dy;
      if (nx >= 0 && nx < width && ny >= 0 && ny < height && grid[ny][nx]) {
        neighbors.emplace_back(nx, ny);
      }
    }
  }
  return neighbors;
}

float AStar::heuristic(const Node &a, const Node &b) {
  return std::abs(a.x - b.x) + std::abs(a.y - b.y);
}
