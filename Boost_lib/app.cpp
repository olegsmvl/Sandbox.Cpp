#include <iostream>
#include <vector>
#include <boost/functional/hash.hpp>
#include <boost/unordered_set.hpp>
#include <boost/version.hpp>

using namespace std;

int main()
{
    std::cout << "boost version: " << BOOST_VERSION << std::endl;

    boost::hash<vector<int>> h;

    vector<int> vec{1,2,3,4,5};
    cout << h(vec) << endl;

    vector<int> point1{1,2};
    vector<int> point2{3,4};

    boost::unordered_set<vector<int>> points;

    points.insert(point1);
    points.insert(point2);

    for (auto p: points){
        cout << p[0] << "," << p[1] << endl;
    }
 
    return 0;
}
