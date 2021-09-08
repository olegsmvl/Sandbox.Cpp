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

    int mass[] = {11,22,33,44,55};

    int* p_mass = mass;

    std::cout <<"sizeof "  << sizeof(*p_mass)  << std:: endl; 
    std::cout <<"sizeof "  << sizeof(p_mass)  << std:: endl; 

    for (size_t i = 0; i < 4; i++)
    {
        std::cout << "p_mass : " << p_mass << " value: " << *p_mass << std:: endl; 
        p_mass++;
    }  

    int z = 1;

    std::cout << z << std:: endl; 

    int m = ++z;
    std::cout << m << std:: endl; 

    const char* str = "some_symbols";
    const char str2[] = "some_symbols";

    std::cout << str  << std:: endl; 
    std::cout << (int)*str  << std:: endl; 
    std::cout << str2 << std:: endl; 
    std::cout << *str2 << std:: endl; 

    std::cout <<"sizeof "  << sizeof(*str)  << std:: endl; 
    std::cout <<"sizeof "  << sizeof(str2)  << std:: endl; 

    const char* p_str = str2;

    for (auto i = 0; i < sizeof(str2); i++)
    {
        std::cout << p_str << " - " <<  *p_str << " - " << (int)*p_str << std:: endl; 
        p_str++;
    }
    

    return 0;
}
