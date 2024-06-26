#include "astar.h"
#include <algorithm>    // For std::reverse
#include <unordered_set>
#include <unordered_map> // For unordered_map

AStar::AStar(int width, int height) : width(width), height(height) {
    grid.resize(height, std::vector<bool>(width, true)); // Initialize grid with no obstacles

    // Add obstacles to the center of the field
    int centerX = width / 2;
    int centerY = height / 2;
    for (int x = centerX - 2; x <= centerX + 2; ++x) {
        for (int y = centerY - 2; y <= centerY + 2; ++y) {
            grid[y][x] = false; // Mark these cells as obstacles
        }
    }
}

std::vector<Node> AStar::findPath(int startX, int startY, int endX, int endY) {
    auto compare = [](const Node& a, const Node& b) { return a.fCost() > b.fCost(); };
    std::priority_queue<Node, std::vector<Node>, decltype(compare)> openList(compare);
    std::unordered_map<int, Node> openSet;  // To quickly check if a node is in the open list

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
            if (closedList.find(neighbor) != closedList.end()) continue;

            float tentativeGCost = current.gCost + heuristic(current, neighbor);

            if (openSet.find(neighbor.x * width + neighbor.y) == openSet.end() || tentativeGCost < neighbor.gCost) {
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

std::vector<Node> AStar::getNeighbors(const Node& node) {
    std::vector<Node> neighbors;
    for (int dx = -1; dx <= 1; ++dx) {
        for (int dy = -1; dy <= 1; ++dy) {
            if (dx == 0 && dy == 0) continue;
            int nx = node.x + dx, ny = node.y + dy;
            if (nx >= 0 && nx < width && ny >= 0 && ny < height && grid[ny][nx]) {
                neighbors.emplace_back(nx, ny);
            }
        }
    }
    return neighbors;
}

float AStar::heuristic(const Node& a, const Node& b) {
    return std::abs(a.x - b.x) + std::abs(a.y - b.y);
}
