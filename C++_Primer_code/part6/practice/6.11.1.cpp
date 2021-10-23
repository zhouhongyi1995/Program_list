#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int count = 0;
    cout << "Please enter your input, type @ to terminate input.\n";
    char ch;
    cin.get(ch);
    while (ch != '@')
    {
        count++;
        if (islower(ch))
        {
            ch = toupper(ch);
        }
        else if (isupper(ch))
        {
            ch = tolower(ch);
        }
        if (isdigit(ch) == false)
        {
            cout << ch;
        }
        cin.get(ch);
    }
    cout << count;
    cout << endl;

    return 0;
}
