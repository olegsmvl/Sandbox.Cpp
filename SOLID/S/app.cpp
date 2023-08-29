#include <iostream>
using namespace std;

class IConnecter(){
    public:
    void connect() = 0;
    void disconnect() = 0;
}

class IUsage(){
    public:
    void read() = 0;
    void write() = 0;
}

int main()
{

    return 0;
}
