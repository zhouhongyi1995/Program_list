#include <iostream>
using namespace std;
 int main()
 {
     int higgens = 5;
     int *pt = &higgens;

     cout << "Value of higgens = " << higgens
          << "; Address of higgens = " << &higgens << endl;
    cout << "Value of     *pt = " << *pt
          << "; Address of      pt = " << pt << endl;

    return 0;
 }