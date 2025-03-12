#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;
void dispaly(const string sa[], int n);

int main()
{
    string list[SIZE];
    cout << "Enter your " << SIZE << " favorite astronomical sights:\n";
    for (size_t i = 0; i < SIZE; i++)
    {
        cout << i + 1 << ": ";
        getline(cin, list[i]);
    }
    cout << "Your list:\n";
    dispaly(list, SIZE);

    return 0;
}

void dispaly(const string sa[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << i + 1 << ": " << sa[i] << endl;
    }
}