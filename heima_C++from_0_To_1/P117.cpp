#include <iostream>
using namespace std;

class Person
{
private:
    
public:
    //在成员函数后面加const，修饰的是this指向，让指针指向的值不可以修改
    void showPerson() const
    {
        //m_A = 100;
    }

    int m_A;
    mutable int m_B ;//特殊变量，即使在常函数中，也可也修改这个变量的值。
};

void test01()
{
    Person p;
    p.showPerson();
}

int main()
{


    return 0;
}