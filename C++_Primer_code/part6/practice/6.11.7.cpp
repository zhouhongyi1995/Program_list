#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string word;
    cout << "Please enter the word: " << endl;
    cin >> word;
    int type1 = 0;
    int type2 = 0;
    int type3 = 0;
    while (word[0] != 'q')
    {
        if (isalpha(word[0]))
        {
            if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u')
            {
                type1++;
            }
            else
            {
                type2++;
            }
        }
        else
        {
            type3++;
        }
        cin >> word;
    }
    cout << type1 << " words beginning with vowels" << endl;
    cout << type2 << " words beginning with consonants" << endl;
    cout << type3 << " others" << endl;

    return 0;
}