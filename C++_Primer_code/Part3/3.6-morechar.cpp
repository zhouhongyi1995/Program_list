#include <iostream>
using namespace std;

int mian()
{
        char ch  = 'M';
        int i  = ch;
        cout << "The ASCII code for " << ch << " is " << i << endl;

        cout << "Add one to the character code:\n";
        ch = ch +1;
        i = ch;

        cout << "Displaying char ch using cout.put(ch):";
        cout.put(ch);

        cout.put('!');
        cout << '$';
        cout << endl << "Done" << endl;

        return 0;
}