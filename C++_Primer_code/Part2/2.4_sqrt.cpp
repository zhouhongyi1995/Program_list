#include <iostream>
#include <cmath>
using namespace std;

int mian()
{
    double area;
    double side;

    cout << "Enter the floor area , in square feet , of your home: ";
    cin >> area;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side
         << " feet to the side.\n";
    cout << "How fascinating!\n";

    return 0;
}