#include <iostream>
using namespace std;

int main()
{
    string f_name;
    string l_name;
    char grade;
    int age;

    cout << "What is your first name? ";
    cin >> f_name;
    cout << "\n";
    cout << "What is your last name? ";
    cin >> l_name;
    cout << "\n";
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "\n";
    cout << "What your age? ";
    cin >> age;
    cout << "\n";
    cout << "Name: " << l_name << ", " << f_name << "\n";
    cout << "Grade: " << char(grade + 1) << "\n";
    cout << "Age: " << age << endl;

    return 0;
}