#include <iostream>
using namespace std;

int main()
{
    const int num = 12;
    int sell[num];
    int total = 0;
    const char *months[num] =
        {
            "January",
            "February",
            "March",
            "April",
            "May",
            "June",
            "July",
            "August",
            "September",
            "October",
            "November",
            "December"};
    for (size_t i = 0; i < 12; i++)
    {
        cout << months[i] << ":";
        cin >> sell[i];
        total += sell[i];
    }
    cout << "so this year we sold " << total << " books for all.\n";

    return 0;
}