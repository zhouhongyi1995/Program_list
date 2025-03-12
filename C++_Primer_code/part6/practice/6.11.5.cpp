#include <iostream>
using namespace std;

int main()
{
    int Flag;
    double Income;
    double Tax;
    cout << "Enter your income:(q to quit) " << endl;
    while (cin >> Income)
    {
        if (Income >= 0)
        {

            if (Income <= 5000)
            {
                Flag = 0;
            }
            else if (Income > 500 && Income <= 15000)
            {
                Flag = 1;
            }
            else if (Income > 15000 && Income <= 35000)
            {
                Flag = 2;
            }
            else
            {
                Flag = 3;
            }
            switch (Flag)
            {
            case 0:
                Tax = 0;
                break;
            case 1:
                Tax = (Income - 5000) * 0.1;
                break;
            case 2:
                Tax = 10000 * 0.1 + (Income - 15000) * 0.15;
                break;
            case 3:
                Tax = 10000 * 0.1 + 20000 * 0.15 + (Income - 35000) * 0.2;
                break;
            }
            cout << "Your tax is " << Tax << endl;
            cout << "Enter next income: ";
        }
        else if (Income < 0)
        {
            cout << "Input fail, please enter a number >= 0.(q to quit)\n";
        }
    }
    if (cin.fail())
    {
        cout << "Input fail, Bye!\n";
    }

    return 0;
}