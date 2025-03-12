#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int Arsize = 20;
    char f_name[Arsize];
    string l_name;
    cout << "Enter your first name: ";
    cin.getline(f_name, Arsize);
    cout << "\n";
    cout << "Enter your last name: ";
    cin >> l_name;
    cout << "\n"
         << "Here's the information in a single string: " << l_name << ", " << f_name << endl;

    return 0;
}