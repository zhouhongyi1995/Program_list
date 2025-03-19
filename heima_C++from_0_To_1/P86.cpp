#include <iostream>
using namespace std;

int * func()
{
    int a = 10; // 局部变量，存放在栈区, 函数执行完后，a会被释放
    return &a;
}
int main() {
    int * p = func();

    cout << *p << endl; // 第一次打印正确，因为此时a还未被释放
    cout << *p << endl; // 第二次打印错误，因为此时a已经被释放，所以打印的是一个不确定的值

    return 0;
}