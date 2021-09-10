#include <iostream>
#include <string>
using namespace std;

int getSize(const char *str);



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

    std::cout <<"sizeof *str: "  << sizeof(*str)  << std:: endl; 
    std::cout <<"sizeof str: "  << sizeof(str)  << std:: endl; 
    std::cout <<"sizeof str2: "  << sizeof(str2)  << std:: endl;    
    std::cout <<"length str: "  << getSize(str)  << std:: endl;    

    const char* p_str = str2;

    for (auto i = 0; i < sizeof(str2); i++)
    {
        std::cout << p_str << " - " <<  *p_str << " - " << (int)*p_str << std:: endl; 
        p_str++;
    }
    
    struct User
    {
        int Id;
        string Name;
        User(int id, string name ){
            Name = name;
            Id = id;
        }
    };

    User *p_user = new User(1, "Igor");
    User user = User(1, "Igor");

    cout<<sizeof(User*)<<endl;
    cout<< p_user <<endl;
    cout<< p_user->Id <<endl;
    cout<< p_user->Name <<endl;
    //int id_user = p_user->Id;
    //string str_name = p_user->Name;
    //cout << str_name <<endl;
    cout << user.Id <<endl;
    cout << user.Name <<endl;

    if (p_user){
        cout<<"data is not null"<<endl;
    }

    return 0;
}

int getSize(const char *str){
    auto p = str;
    int size = 0;

    while(*p != '\0'){
        size++;
        p++;
    }
    return size;
}