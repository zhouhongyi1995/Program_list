#include <iostream>
using namespace std;

int main()
{
    int row;
    int i = 1;
    cout << "Enter number of rows: ";
    cin >> row;
    for (i = 1; i <= row; i++)
    {
        for (size_t j = 0; j < row - i; j++)
        {
            cout << ".";
        }
        for (size_t j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}