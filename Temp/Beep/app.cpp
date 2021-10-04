#include <iostream>
#include <Windows.h>
using namespace std;

int main(int argc, char const *argv[])
{
    //Beep(523,500);
    MessageBeep(0xFFFFFFFF);
    cin.get(); // wait
    return 0;
}
