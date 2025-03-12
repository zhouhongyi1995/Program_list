#include <iostream>
void cheers(int);
using namespace std;
double cube(double x);

int main()
{
    cheers(5);
    cout << "Give me a number: ";
    double side;
    cin >> side;
    double volume = cube(side);
    cout << "A " << side << "-foot cube has a volume of ";
    cout << volume << " cubic feet.\n";
    cheers(cube(side));
    return 0;
}

double cube(double x)
{
    return x * x * x;
}

void cheers(int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << "Cheers! ";
        cout << endl;
    }
}