#include <iostream>
using namespace std;
#include <fstream>

void test01()
{
    ofstream ofs;

    ofs.open("test.txt", ios::out);
    ofs << "姓名：张三" << endl;
    ofs << "性别：男" << endl;
    ofs << "年龄：18" << endl;

    ofs.close();
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
