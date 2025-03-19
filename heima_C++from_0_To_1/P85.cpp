#include <iostream>
using namespace std;


int g_a = 10;//全局变量
int g_b = 10;//全局变量

int main()
{
    int a = 10;//局部变量
    int b = 10;//局部变量

    cout << "局部变量a的地址为：" << &a << endl;
    cout << "局部变量b的地址为：" << &b << endl;

    cout << "全局变量g_a的地址为：" << &g_a << endl;
    cout << "全局变量g_b的地址为：" << &g_b << endl;

    static int s_a = 10;//静态变量
    static int s_b = 10;//静态变量

    cout << "静态变量s_a的地址为：" << &s_a << endl;
    cout << "静态变量s_b的地址为：" << &s_b << endl;
    //字符串常量是放在常量区的
    cout << "字符串常量的地址为：" << &"hello world" << endl;

    return 0;
}