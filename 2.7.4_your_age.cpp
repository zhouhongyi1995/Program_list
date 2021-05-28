#include <iostream>
using namespace std;
int age2month(int);

int main()
{
    int age;
    cout << "Please enter your age by year: ";
    cin >> age;
    cout << "Your age by month is :" << age2month(age);

    return 0;
}

int age2month(int age)
{
    int month;
    month = age * 12;

    return month;
}