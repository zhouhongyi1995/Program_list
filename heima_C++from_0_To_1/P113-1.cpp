#include <iostream>
using namespace std;

class Person
{
public:
    static void func()
    {
        m_A = 100;
        //m_B = 200;    静态成员函数不能访问非静态成员变量,无法区分到底是哪个对象的m_B属性
        cout << "static void func调用" << endl;
    };

    static int m_A;
    int m_B;
};

void test01()
{
    // 1.通过对象访问
    Person p;
    p.func();
    // 2.通过类名访问
    Person::func();
}

int main()
{
    test01();

    return 0;
}
