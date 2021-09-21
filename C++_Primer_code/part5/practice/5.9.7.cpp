#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    cout << "How many cars do you wish to catalog? ";
    cin >> num;

    struct car
    {
        string brand;
        int year;
    };

    car *user = new car[num];

    for (size_t i = 0; i < num; i++)
    {
        cout << "Car #" << i + 1 << ":\n";
        cout << "Please enter the make: ";
        getline(cin, user[i].brand);
        getline(cin, user[i].brand);
        cout << "Please enter the year made: ";
        cin >> user[i].year;
    };

    cout << "heare is your collection: " << endl;
    for (size_t i = 0; i < num; i++)
    {
        cout << (*(user + i)).year << " " << (*(user + i)).brand << endl;
    }

    return 0;
}