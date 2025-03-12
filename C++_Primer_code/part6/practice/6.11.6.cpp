#include <iostream>
#include <string>
using namespace std;
struct donation
{
    string name;
    double money;
};
int main()
{
    int num;
    cout << "Please enter the number of donors: ";
    cin >> num;
    donation *d = new donation[num];
    int bigger = 0;

    for (size_t i = 0; i < num; i++)
    {
        cout << "Please enter the name and donation: " << endl;
        cin >> d[i].name;
        cin >> d[i].money;
        if (d[i].money > 10000)
        {
            bigger++;
        }
    }

    cout << "Grand Patrons: " << endl;
    for (size_t i = 0; i < num; i++)
    {
        if (bigger > 0)
        {
            if (d[i].money > 10000)
            {
                cout << d[i].name << "\t" << d[i].money << endl;
            }
        }
        else
        {
            cout << "None.\n";
            break;
        }
    }
    cout << "Patrons: " << endl;
    for (size_t i = 0; i < num; i++)
    {
        if (bigger < num)
        {
            if (d[i].money <= 10000)
            {
                cout << d[i].name << "\t" << d[i].money << endl;
            }
        }
        else
        {
            cout << "None.\n";
            break;
        }
    }
    delete []d;
    return 0;
}
