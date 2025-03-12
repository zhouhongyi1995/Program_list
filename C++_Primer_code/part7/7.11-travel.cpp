#include <iostream>
using namespace std;

struct travel_time
{
    int hours;
    int mins;
};
const int Mins_per_hr = 60;

travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);
int main()
{
    travel_time day1;
    travel_time day2;
    cout << "Enter the hours of day1: ";
    cin >> day1.hours;
    cout << "Enter the minuters of day1: ";
    cin >> day1.mins;

    cout << "Enter the hours of day2: ";
    cin >> day2.hours;
    cout << "Enter the minuters of day2: ";
    cin >> day2.mins;

    travel_time trip = sum(day1, day2);
    cout << "Two-day total: ";
    show_time(trip);

    travel_time day3 = {4, 32};
    cout << "Three-day total: ";
    show_time(sum(trip, day3));

    return 0;
}
travel_time sum(travel_time t1, travel_time t2)
{
    travel_time total;

    total.mins = (t1.mins + t2.mins) % Mins_per_hr;
    total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / Mins_per_hr;

    return total;
}

void show_time(travel_time t)
{
    cout << t.hours << " hous, "
         << t.mins << " minutes\n";
}
