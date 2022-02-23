#include "BaseClass.h"

class ChildClass : public BaseClass<int>{
public:
    ChildClass(int id):BaseClass(id){}
};