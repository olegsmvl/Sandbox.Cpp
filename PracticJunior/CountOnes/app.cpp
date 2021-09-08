#include <iostream>
#include <string>
using namespace std;

int main(){
	int number = 132421121;
	auto num = to_string(number);
	cout << num << endl;

	int counter = 0;

	for (auto x: num){
		if (x == '1') 
		counter++;
	}

	cout << counter << endl;

	return 0;
}