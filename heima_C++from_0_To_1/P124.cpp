#include <iostream>
using namespace std;

class MyInteger
{
    friend ostream &operator<< (ostream & cout, MyInteger myint);

public:
    MyInteger()
    {
        m_Num = 5;
    }
    MyInteger &operator--()
    {
        m_Num--;
        return *this;
    }
    MyInteger &operator--(int)
    {
        MyInteger temp = *this;

        m_Num--;

        return temp;
    }

private:
    int m_Num;
};

ostream &operator<<(ostream &cout, MyInteger myint)
{
    cout << myint.m_Num;

    return cout;
}

void test01()
{
    MyInteger myint;
    cout << myint << endl;
}
int main(int argc, char const *argv[])
{
    test01();

    return 0;
}
