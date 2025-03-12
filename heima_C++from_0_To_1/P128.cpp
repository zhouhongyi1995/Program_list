#include <iostream>
using namespace std;
class Base1
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};

class Son1 : public Base1
{
public:
    void func()
    {
        m_A = 10;
        m_B = 10;
        // m_C = 10; 无法访问
    }
};

void test01()
{
    Son1 s1;
    s1.m_A = 100;
    // s1.m_B = 100; 无法访问
}

int main(int argc, char const *argv[])
{

    return 0;
}
