#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::endl;
using std::vector;
using namespace std;

void find_func(vector<int> vec);

int main(){
	vector<int> numbers = {1,3,5,8};
	//	cout << numbers[0] << endl;

	for (int n : numbers)
				cout << n << endl;

	numbers.push_back(1000);

	cout << numbers.front() << endl;
	cout << numbers.back() << endl;

	find_func(numbers);

	return 0;
}

void find_func(vector<int> vec){
	cout << "begin" << endl;
	int val = 5;

	auto pos = find(vec.begin(), vec.end(), val);

	cout << *pos << endl;
	cout << "end" << endl;
}

