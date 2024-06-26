#ifndef ASTAR_H
#define ASTAR_H

#include <cmath>
#include <queue>
#include <unordered_set>
#include <vector>

struct Node {
  Node() : x(0), y(0), gCost(0), hCost(0) {}
  int x, y;
  float gCost, hCost;
  Node *parent;

  Node(int x, int y, Node *parent = nullptr)
      : x(x), y(y), gCost(0), hCost(0), parent(parent) {}

  float fCost() const { return gCost + hCost; }

  bool operator==(const Node &other) const {
    return x == other.x && y == other.y;
  }
};

struct NodeHash {
  size_t operator()(const Node &node) const {
    return std::hash<int>()(node.x) ^ std::hash<int>()(node.y);
  }
};

class AStar {
public:
  AStar(int width, int height);
  std::vector<Node> findPath(int startX, int startY, int endX, int endY);

private:
  int width, height;
  std::vector<std::vector<bool>> grid;
  std::vector<Node> getNeighbors(const Node &node);
  float heuristic(const Node &a, const Node &b);
};

#endif // ASTAR_H
