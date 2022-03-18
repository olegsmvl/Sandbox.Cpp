#include <iostream>
#include <fstream>
#include <string>
using namespace std;

enum class LogOutput
{
    LOG_CONSOOLE,
    LOG_FILE
};

class Log
{
private:
    LogOutput _logType;
    string _fileName;

    void saveToFile(string text)
    {
        ofstream out(_fileName, ios::app);
        if (out.is_open())
            out << text << endl;
        out.close();
    }

public:
    Log(LogOutput type, string fileName = "") : _logType(type), _fileName(fileName) {}

    void SendLog(string text)
    {
        switch (_logType)
        {
        case LogOutput::LOG_CONSOOLE:
            cout << "log: " << text << endl;
            break;

        case LogOutput::LOG_FILE:
            saveToFile(text);
            break;

        default:
            break;
        }
    }
};

int main(int argc, char const *argv[])
{
    //Log log(LogOutput::LOG_CONSOOLE);
    Log log(LogOutput::LOG_FILE, "log.txt");

    while (true)
    {
        string text;

        cout << "to log" << endl;
        cin >> text;

        if (text == "q")
            break;

        log.SendLog(text);
    }

    return 0;
}
