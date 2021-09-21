#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    int count = 0;
    cout << "Enter words (type the word 'done' to quit): ";
    cin >> word;
    while (word != "done")
    {
        if (bool(cin >> word) == true)
        {
            count++;
        }
    }

    cout << "You entered a total of " << count << " words.\n";

    return 0;
}