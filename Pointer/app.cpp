#include <iostream>

int main(){
	int a = 5;
    int *p;
    p = &a;

    int b = 23;
    int *p_b = &b;

    std::cout << p << std:: endl; 
    std::cout << *p << std:: endl; 

    p++;

    std::cout << p << std:: endl; 
    std::cout << *p << std:: endl; 

    std::cout << p_b << std:: endl; 
    std::cout << *p_b << std:: endl; 

    return 0;
}
