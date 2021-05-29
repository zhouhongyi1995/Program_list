#include <iostream>
using namespace std;

int main()
{
        char ch;

        cout <<"Enter a character: \n";
        cin >> ch;              //gets only one character ,not a string;
        cout << "Hola! ";
        cout << "Thank you for the " << ch << "character.\n";

        return 0;
}