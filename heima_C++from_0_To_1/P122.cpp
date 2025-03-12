#include <iostream>
using namespace std;

class Person
{
    friend ostream &operator<<(ostream &out, Person &p);

public:
    Person(int a, int b)
    {
        this->m_A = a;
        this->m_B = b;
    }

private:
    int m_A;
    int m_B;

//成员函数实现不了左移运算符
};

ostream &operator<<(ostream &out, Person &p)
{
    out << "a: " << p.m_A << " b: " << p.m_B;

    return out;
};

void test()
{
    int a = 10;
    Person p1(10, 20);

    cout << p1 << " hello world " << endl;

    cout << a << endl;
}

int main(int argc, char const *argv[])
{
    test();

    return 0;
}
