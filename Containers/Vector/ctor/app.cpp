#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::endl;
using std::vector;
using namespace std;


class MyClass{
	public:
	MyClass(vector<int>& values) : values_(values){
		
	}

	void print(){
		for (auto var : values_){
			cout << var << endl;
		}
	}
		
	private:
	vector<int>& values_;
};

int main(){
	vector<int> numbers = {1,3,5,8};
	//	cout << numbers[0] << endl;

	MyClass mc(numbers);
	mc.print();

	return 0;
}


