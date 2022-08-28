//通过自己写成员函数，实现两个对象相加属性后返回新的对象.
#include <iostream>
using namespace std;

//加号运算符重载
class Person
{
public:
    Person operator+(Person &p) //成员函数实现
    {
        Person temp;
        temp.m_A = this->m_A + p.m_A;
        temp.m_B = this->m_B + p.m_B;

        return temp;
    }
    int m_A;
    int m_B;
};

/*全局函数实现
Person operator+(Person &p1, Person &p2)
{
    Person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;

    return temp;
}
*/
void test01()
{
    Person p1;
    p1.m_A = 10;
    p1.m_B = 20;
    Person p2;
    p2.m_A = 10;
    p2.m_B = 20;

    Person p3 = p2 + p2;

    cout << "p3.m_A = " << p3.m_A << endl;
    cout << "p3.m_B = " << p3.m_B << endl;
}

int main(int argc, char const *argv[])
{

    test01();

    return 0;
}
