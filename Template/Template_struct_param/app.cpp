#include <iostream>
#include <string>
using namespace std;

struct Point {
  int x;
  int y;

  Point operator+(const Point &other) {
    return Point{x * 100 + other.x, y * 100 + other.y};
  }
};

void print_point(Point p) { cout << "(" << p.x << "," << p.y << ")" << endl; }

struct Info
{
    void operator()(const Point& p) const{
        print_point(p);
    }
};


template <typename T> T sum(T a, T b) { return a + b; }



int main(int argc, char const *argv[]) {
  Point p1{1, 2};
  Point p2{3, 4};

  auto res = p1 + p2;
  print_point(res);

  auto p = sum(p1,p2);
  print_point(p);

  cout << sum(1.5, 3.6) << endl;

  return 0;
}
