#include <iostream>
#include <vector>
#include <unordered_set>
#include <functional>
#include <limits>

using namespace std;

struct Point {
    int x, y;
    Point(int _x, int _y) : x(_x), y(_y) {}
};

struct PointHash
{
    size_t operator()(const Point& p) const {
        string str = to_string(p.x) +  to_string(p.y);
        std::hash<string> h;
        return h(str);
    }
};

struct PointEqual
{
    bool operator()(const Point& lhs, const Point& rhs) const{
        return lhs.x == rhs.x && lhs.x == rhs.x;
    }
};



bool isReflected(vector<Point>& points) {
    if (points.empty()) {
        return true;  // No points to reflect
    }

    unordered_set<Point, PointHash, PointEqual> pointSet;

    int min_x = INT32_MAX;
    int max_x = INT32_MIN;

    for (Point p: points){
        min_x = min(min_x, p.x);
        max_x = max(max_x, p.x);

        pointSet.insert(p);
    }

    double line = (max_x - min_x) / 2 + min_x ;

    for (const Point& p : points) {
        int x = p.x;
        int y = p.y;

        int dist = line - x;
        int reflected_x = line + dist;
        Point reflected_p{reflected_x,  y};

        if (pointSet.find(reflected_p) == pointSet.end()) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<Point> points = {{1, 1}, {1, 1}};
    bool result = isReflected(points);
    cout << (result ? "True" : "False") << endl;  

    return 0;
}