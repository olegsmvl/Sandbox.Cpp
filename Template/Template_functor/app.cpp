#include <iostream>
#include <string>
using namespace std;

struct Point {
  int x;
  int y;

  Point operator+(const Point &other) {
    return Point{x + other.x, y + other.y};
  }
};

struct Info {
  void print_point(const Point& p) const { cout << "(" << p.x << "," << p.y << ")" << endl; }

  void operator()(const Point &p) const { print_point(p); }
};

template <typename T, typename U> T sum(T a, T b) {
  auto result = a + b;
  U obj;
  obj(a);
  obj(b);
  cout << "-----" << endl;
  obj(result);
  return result;
}

int main(int argc, char const *argv[]) {
  Point p1{1, 2};
  Point p2{3, 4};

  auto p = sum<Point, Info>(p1, p2);

  return 0;
}
