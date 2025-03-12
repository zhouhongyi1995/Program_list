#include <iostream>
using namespace std;
double cal(int num1, int num2, int bingo1, int bingo2);
double fac(int num, int bingo);
const int Num1 = 47;
const int Num2 = 27;
const int Bingo1 = 5;
const int Bingo2 = 1;

int main()
{
    cout << "Your Probability to win the first prize in this game is\t";
    double pro;
    pro = cal(Num1, Num2, Bingo1, Bingo2);
    cout << pro << " !!!" << endl;

    return 0;
}

double cal(int num1, int num2, int bingo1, int bingo2)
{
    double pro;
    double pro1;
    double pro2;
    pro1 = fac(num1, bingo1);
    pro2 = fac(num2, bingo2);
    pro = pro1 * pro2;
    return pro;
}

double fac(int num, int bingo)
{
    double result = 1.0;
    for (size_t i = bingo; i > 0; i--)
    {
        result *= (double(i) / double(num - i + 1));
    }
    return result;
}