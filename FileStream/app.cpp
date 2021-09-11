#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void write(const char* file_name){
    ofstream out(file_name);
    if (out.is_open())
    {
        out << "some text" << endl;
        out << "other text" << endl;
    }
    out.close();
}

void read_by_words(const char* file_name){
    ifstream in(file_name);
    string word = "";
    string all_text = "";
    if (in.is_open())
    {
       while(in >> word){
           all_text += word + " ";
       }
    }
    cout << all_text;
    in.close();
}

void read_by_lines(const char* file_name){
    ifstream in(file_name);
    string line = "";
    string all_text = "";
    if (in.is_open())
    {
       while(getline(in, line)){
           all_text += line + "\n";
       }
    }
    cout << all_text;
    in.close();
}

int main(int argc, char const *argv[])
{
    const char* file_name = "test.txt";
    write(file_name);
    read_by_lines(file_name);
    return 0;
}
