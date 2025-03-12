#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Fisrt_Name;
    string Last_Name;

    cout << "Enter your fisrt name: ";
    cin >> Fisrt_Name;
    cout << "Enter your last neme: ";
    cin >> Last_Name;

    cout << "Here's the information in a single string: " << Last_Name << "," << Fisrt_Name << endl;

    return 0;
}