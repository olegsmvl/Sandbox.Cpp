#include "IBase.h"
#include <string> 
using namespace std;

template <typename T>
class ChildClass : public IBase<T>{
public:
    ChildClass(int id):Id(id){}
    
    int Id;
    T child_field;

    T getField() override{
        return child_field;
    }
};