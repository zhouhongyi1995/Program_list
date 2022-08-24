// this 指针的使用
#include <iostream>
using namespace std;

class Person
{
public:
    Person(int age)
    {
        this->age = age;
    }
    Person &PersonAddAge(Person &p)
    {
        this->age += p.age;

        return *this;
    }

    int age;
};

void test01()
{
    Person p1(18);
    cout << "p1的年龄为: " << p1.age << endl;
};

void test02()
{
    Person p1(10);

    Person p2(10);
    //链式编程思想
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

    cout << "p2的年龄为: " << p2.age << endl;
}

int main()
{
    test01();
    test02();

    return 0;
}