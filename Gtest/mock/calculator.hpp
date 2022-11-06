#include "adder.hpp"
class Calculator{
public:
int calc(int a, int b){
    return adder_->add(a,b);
}
void add_solver(Adder* solver){
    adder_ = solver;
}
private:
    Adder* adder_;
};