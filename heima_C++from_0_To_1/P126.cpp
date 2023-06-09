#include <iostream>
#include <string>
using namespace std;

class MyPrint
{
public:
    void operator()(string test)
    {
        cout << test << endl;
    }
};

void test01()
{
    MyPrint MyPrint;

    MyPrint("hello world");
}

int main(int argc, char const *argv[])
{
    test01();

    return 0;
}
