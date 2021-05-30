#include <iostream>
using namespace std;

int main()
{
        char ch;
        char alarm = '\a';

        cout <<"Enter a character: \n";
        cin >> ch;              //gets only one character ,not a string;
        cout << "Hola! ";
        cout << "Thank you for the " << (int)ch << " character.\n";             //(int)Type conversion;
        cout << '$' << endl;
        cout << alarm;

        return 0;
}