#include <iostream>
using namespace std;

int main()
{
    double i;
    double sum;
    cout << "Enter an integer( 0 to quit ): ";
    cin >> i;
    while (i != 0)
    {
        sum += i;
        cout << "Enter an ingeger ( 0 to quit ): ";
        cin >> i;
    }
    cout << "sum = " << sum << endl;
    return 0;
}