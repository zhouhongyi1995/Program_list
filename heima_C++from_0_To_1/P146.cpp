#include <iostream>
using namespace std;
#include <fstream>

class Person
{
public:
    char m_Name[64];
    int m_Age;
};

void test01()
{
    ifstream ifs;
    ifs.open("person.txt", ios::in | ios::binary);

    if (!ifs.is_open())
    {
        cout << "文件打开失败" << endl;
        return;
    }

    cout << "文件打开成功" << endl;

    Person p;

    ifs.read((char *)&p, sizeof(Person));

    if (ifs.gcount() != sizeof(Person)) {
        cout << "读取数据失败" << endl;
        ifs.close();
        return;
    }

    cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;

    ifs.close();
}
int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
