#include <iostream>
using namespace std;
#include <array>

struct Pizza
{
    string Company_name;
    double P_dia;
    double P_wight;
};

int main()
{
    Pizza WW[10];       //ruhe shixian shiyong dongtaishuzu??????????????????????????????

    cout << "Enter the name of the company: ";
    cin >> WW[0].Company_name;
    cout << endl;
    cout << "Enter the dia: ";
    cin >> WW[0].P_dia;

    cout << WW[0].Company_name << endl;
    cout << WW[0].P_dia << endl;

    return 0;
}