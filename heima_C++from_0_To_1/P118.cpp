#include <iostream>
using namespace std;

class Building
{
    friend void goodGay(Building *building);

public:
    Building()
    {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }
    string m_SittingRoom;

private:
    string m_BedRoom;
};

void goodGay(Building *building)
{
    cout << "好基友全局函数 正在访问：" << building->m_SittingRoom << endl;
    cout << "好基友全局函数 正在访问：" << building->m_BedRoom << endl;
};

void test01()
{
    Building b;
    goodGay(&b);
}
int main()
{
    test01();

    return 0;
}