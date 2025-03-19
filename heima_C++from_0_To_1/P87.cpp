#include <iostream>
using namespace std;

int * func ()
{
    int * p = new int(10);
    return p;
}

void test()
{
    int * arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
        cout << arr[i] << endl;
    }
    delete[] arr;
    arr = NULL;
}

int main()
{
    int *p = func();
    cout << *p << endl;
    delete p;
    p = NULL;

    test();

    return 0;
}