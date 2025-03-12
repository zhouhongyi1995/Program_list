#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int sum = 0;
    cout << "Enter the first integer: ";
    cin >> i;
    cout << "Enter the second integer: ";
    cin >> j;
    while (i <= j)
    {
        sum += i;
        i++;
    }
    cout << sum << endl;

    return 0;
}