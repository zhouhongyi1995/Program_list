#include <iostream>
using namespace std;

int main()
{
    const int month = 12;
    const int year = 3;
    int sell[month][year];
    int year_total[year] = {
        0,
        0,
        0,
    };
    int All_total = 0;
    const char *months[month] =
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
            "December",
        };
    for (size_t i = 0; i < year; i++)
    {
        cout << "The " << i + 1 << " year:" << endl;
        for (size_t j = 0; j < month; j++)
        {
            cout << months[j] << ": ";
            cin >> sell[i][j];
            year_total[i] = year_total[i] + sell[i][j];
        }
    }
    All_total = year_total[0] + year_total[1] + year_total[2];
    cout << "The 1st year's saleroom is: " << year_total[0] << endl;
    cout << "The 2nd year's saleroom is: " << year_total[1] << endl;
    cout << "The 3rd year's saleroom is: " << year_total[2] << endl;
    cout << "The all saleroom fo three years is: " << All_total << endl;

    return 0;
}