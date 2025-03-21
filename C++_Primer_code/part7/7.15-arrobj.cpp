#include <iostream>
#include <array>
#include <string>
using namespace std;

const int Seasons = 4;
const array<string, Seasons> Snames =
    {
        "Spring",
        "Summer",
        "Fail",
        "Winter",
};

void fill(array<double, Seasons> *pa);

void show(array<double, Seasons> da);

int main()
{
    array<double, Seasons> expenses;
    fill(&expenses);
    show(expenses);

    return 0;
}

void fill(array<double, Seasons> *pa)
{
    for (size_t i = 0; i < Seasons; i++)
    {
        cout << "Enater " << Snames[i] << " expenses: ";
        cin >> (*pa)[i];
    }
}

void show(array<double, Seasons> da)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (size_t i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenss: $" << total << endl;
}