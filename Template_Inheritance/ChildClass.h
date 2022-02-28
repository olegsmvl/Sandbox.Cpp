#include "BaseClass.h"
 
template <typename T>
class ChildClass : public BaseClass<T>{
public:
    ChildClass(int id):BaseClass<T>(id){}
    T child_field;
};