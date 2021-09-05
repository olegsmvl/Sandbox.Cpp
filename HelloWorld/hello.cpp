#include <iostream>

int main(){
    setlocale(LC_ALL, "");
    std::cout << "Hello!\n";

    int numbers[] = {1,2,3,4,5};

    for (auto number : numbers)
    {
        std::cout << number << std::endl ;
    }
    
    std::cout << sizeof(numbers) << std::endl;
    std::cout << sizeof(numbers[0]) << std::endl;

    return 0;
}
