#include <iostream>
using namespace std;

class ITempSensor{
    public:
    virtual int get_temp() = 0;
};

class MyTempSensor : public ITempSensor
{
    public:
    int get_temp() override{
        return 42;
    }
};

class Controller{
    public:
    
    Controller(ITempSensor *t) : temp_sensor(t){
    }
    
    void work(){
        cout << temp_sensor->get_temp() << endl;
    }
    private:
    ITempSensor* temp_sensor;
};


int main(){

    MyTempSensor s;
    Controller controller(&s);
    controller.work();
    return 0;
}