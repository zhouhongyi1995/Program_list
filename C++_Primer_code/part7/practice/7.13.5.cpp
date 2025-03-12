#include <iostream>
using namespace std;
long long fac(long long num);

int main()
{
    long long num;
    long long result;
    cout << "This program can calculation the factorial.\t'q' to quit."
         << endl;
    while (1)
    {
        cout << "Enter the number for factorial: ";
        cin >> num;
        if (!cin)
        {
            cout << "Input terminated.\nQuit\n";
            break;
        }
        else if (num < 0)
        {
            cout << "Bad input , please enter a positive number!" << endl;
            continue;
        }
        else if (num >= 0)
        {
            result = fac(num);
            cout << "The factorial of " << num << "  is "
                 << result << endl;
        }
    }

    return 0;
}

long long fac(long long num)
{
    long long result;
    if (num == 0)
    {
        result = 1;
    }
    else
    {
        result = num * fac(num - 1);
    }

    return result;
}