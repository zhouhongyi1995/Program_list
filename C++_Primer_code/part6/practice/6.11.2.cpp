#include <iostream>
using namespace std;

int main()
{
    double donation[10];
    int count = 0;
    double sum = 0.0;
    double average = 0.0;
    int num = 0;
    cout << "Enter 10 donation: " << endl;
    for (size_t i = 0; i < 10; i++)
    {
        cin >> donation[i];
        if (cin.fail())
        {
            cout << "Not a digit!\n";
            break;
        }
        sum += donation[i];
        count++;
    }
    average = sum / count;
    for (size_t i = 0; i < 10; i++)
    {
        if (donation[i] > average)
        {
            num++;
        }
    }
    cout << "The average = " << average << endl;
    cout << "In this array has " << num << " number(s) larger than average." << endl;

    return 0;
}