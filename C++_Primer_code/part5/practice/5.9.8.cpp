#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int count;
    char word[100];
    cout << "Enter words (type the word 'done' to quit ): " << endl;
    cin >> word;

    while (strcmp(word, "done") != 0)
    {
        if (bool(cin >> word) == true)
        {
            count++;
        }
    }

    cout << endl
         << "You entered a total of " << count << " words.\n";

    return 0;
}