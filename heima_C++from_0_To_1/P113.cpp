#include <iostream>
using namespace std;

class Person
{
public:
    static int m_A;
};

int Person::m_A = 100;

void test01()
{
    Person p;
    cout << p.m_A << endl;

    Person p2;
    p2.m_A = 200;

    cout << p.m_A << endl;
};

void test02()
{
    //静态成员变量不属于某个对象上，所有对象都共享同一份数据
    //因此静态成员变量有两种访问方式
    // 1.通过对象进行访问
    Person p;
    cout << p.m_A << endl;
    // 2.通过类名进行访问
    cout << Person::m_A << endl;
};

int main()
{
    test01();
    test02();

    return 0;
}