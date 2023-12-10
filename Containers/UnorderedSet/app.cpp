#include <functional>
#include <iostream>
#include <unordered_set>
using namespace std;

struct Point {
  int x;
  int y;

  void print() const{
    cout << "(" << x << "," << y << ")" << endl;
  }
};

struct PointEqual {
  bool operator()(const Point &lhs, const Point &rhs) const {
    return lhs.x == rhs.x && lhs.y == rhs.y;
  }
};

struct PointHash {
  size_t operator()(const Point &p) const {
    std::hash<int> hash_f;
    size_t hash = (hash_f(p.x) + 1000) ^ (hash_f(p.y) << 1);
    cout << "----------" << endl;
    p.print();
    cout << hash << endl;
    cout << "----------" << endl;
    return hash;
  }
};

int main() {
  unordered_set<Point, PointHash, PointEqual> s;

  Point p1{2, 4};
  Point p2{10, 0};
  Point p3{10, 0};

  s.insert(p1);
  s.insert(p2);
  s.insert(p3);

  for (Point p : s){
    p.print();
  }

  return 0;
}
