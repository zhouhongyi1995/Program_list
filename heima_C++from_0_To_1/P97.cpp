#include <iostream>
using namespace std;

void func()
{
    cout << "func()调用" << endl;
}
void func(int a)
{
    cout << "func(int a)调用" << endl;
}
void func(double a)
{
    cout << "func(double a)调用" << endl;
}
void func(int a, double b)
{
    cout << "func(int a, double b)调用" << endl;
}
void func(double a, int b)
{
    cout << "func(double a, int b)调用" << endl;
}

// 函数重载注意事项
// 1.引用作为重载条件
// 2.函数重载碰到默认参数
// 3.函数重载碰到函数默认参数
// 4.函数重载碰到函数重载
// 5.函数重载碰到函数模板
// 6.函数重载碰到函数指针
// 7.函数的返回值不可以作为函数重载的条件

int main(){


    return 0;
}