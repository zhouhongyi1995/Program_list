#include <iostream>
using namespace std;

void not_delete_fun();
void delete_fun();

int main()
{
    not_delete_fun();
    not_delete_fun();
    not_delete_fun();

    delete_fun();
    delete_fun();
    delete_fun();

    int size = 10;
    string *Dynamic_Arr4 = new string[size]{"aa", "bb", "cc", "dd", string(1, 'e'), "aa", "bb", "cc", "dd", string(2, 'e')};        
    //string(1,'e')shiyong gaifangfa shuru yige zifu'e';string(2,'e')shuru le liangg zifu 'e'
    cout << Dynamic_Arr4[4] << endl;
    cout << Dynamic_Arr4[9] << endl;

    delete[] Dynamic_Arr4;
    return 0;
}

void not_delete_fun()
{
    int *arr_test = new int[10];
    cout << arr_test << endl;
}

void delete_fun()
{
    int *arr_test = new int[10];
    cout << arr_test << endl;
    delete[] arr_test;
}