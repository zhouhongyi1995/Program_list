#include <iostream>
#include <array>
using namespace std;
const int ArSize = 101;

int main()
{
    array<long double, ArSize> factorials;
    int i;
    factorials[1] = factorials[0] = 1;
    for (i = 2; i < ArSize; i++)
    {
        factorials[i] = i * factorials[i - 1];
    }
    i = i - 1;
    cout << i << "! = " << factorials[i] << endl;

    return 0;
}