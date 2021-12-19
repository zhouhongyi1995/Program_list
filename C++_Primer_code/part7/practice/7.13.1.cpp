#include <iostream>
double Average_of_num(double x, double y);
using namespace std;

int main()
{
    double x;
    double y;
    cout << "Enter two numbers for average(0 to quit):\n";

    while (cin >> x && cin >> y)
    {
        if (x == 0 || y == 0)
        {
            cout << "Input terminated\n";
            break;
        }
        else
        {
            cout << "The average of two numbers is "
                 << Average_of_num(x, y) << endl;
        }
        cout << "Enter two numbers for average(0 to quit):\n";
    }

    return 0;
}

double Average_of_num(double x, double y)
{
    return 2.0 * double(x * y) / (x + y);
}
