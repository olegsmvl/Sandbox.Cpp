#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main(){
	vector<int> numbers = {1,3,5,8};
	//	cout << numbers[0] << endl;

	for (int n : numbers)
				cout << n << endl;

	numbers.push_back(1000);

	cout << numbers.front() << endl;
	cout << numbers.back() << endl;

	return 0;
}