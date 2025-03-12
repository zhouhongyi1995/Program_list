#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay)
    {
        ;
    }
    cout << "done \a\n";
    double prices[5] = {
        4.99,
        10.99,
        6.87,
        7.99,
        8.49,
    };
    for (double x : prices)        //jiyu fanwei de for xunhuan(C++11)
        cout << x << endl;
    return 0;
}