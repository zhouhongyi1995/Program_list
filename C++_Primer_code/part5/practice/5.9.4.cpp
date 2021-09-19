#include <iostream>
using namespace std;

int main()
{
    double D_Assets = 100;
    double C_Assets = 100;
    int year = 1;
    while ((C_Assets += C_Assets * 0.05) <= (D_Assets += 10))
    {
        year++;
    }
    cout << "Cleo's assets exceed Daphne's in " << year << "years.\n";
    cout << "Cleo's assets is " << C_Assets << endl;
    cout << "Daphne's assets is " << D_Assets << endl;

    return 0;
}