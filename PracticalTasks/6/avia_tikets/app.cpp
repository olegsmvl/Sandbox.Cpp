#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct flight_data
{
    int day;
    int month;
    int year;

    string get_string()
    {
        return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
    }
};

struct ticket
{
    string destiantion;
    int flight_number;
    string passenger;
    flight_data data;

    string get_string()
    {
        return destiantion + "\t" + to_string(flight_number) + "\t" + passenger + "\t" + data.get_string();
    }
};

int main(int argc, char const *argv[])
{
    vector<ticket> tickets;
    ticket t1{"USA1", 123, "Oleg", flight_data{1, 4, 2022}};
    ticket t2{"USA2", 123, "Oleg", flight_data{2, 4, 2022}};
    ticket t3{"USA3", 123, "Oleg", flight_data{3, 4, 2022}};
    ticket t4{"USA4", 123, "Oleg", flight_data{4, 4, 2022}};
    ticket t5{"USA5", 123, "Oleg", flight_data{5, 4, 2022}};

    tickets.push_back(t1);
    tickets.push_back(t2);
    tickets.push_back(t3);
    tickets.push_back(t4);
    tickets.push_back(t5);

    auto iter = tickets.begin();
    iter += 2;

    tickets.erase(iter);

    for (auto t : tickets)
        cout << t.get_string() << endl;

    return 0;
}
