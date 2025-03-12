#include <iostream>
using namespace std;

int main()
{
    string name;
    string dessert;

    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favorite desser:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert << " for you, " << name << endl;
    return 0;
}