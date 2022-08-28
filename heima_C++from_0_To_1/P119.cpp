#include <iostream>
#include <string>
using namespace std;

class Building;
class GoodGay
{
private:
    Building *building;

public:
    GoodGay();
    void visit();
};

class Building
{
    friend class GoodGay;

public:
    Building();

public:
    string m_SittingRoom;

private:
    string m_BedRoom;
};

Building::Building()
{
    this->m_SittingRoom = "客厅";
    this->m_BedRoom = "卧室";
};

GoodGay::GoodGay()
{
    building = new Building;
};

void GoodGay::visit()
{
    cout << "好基友正在访问：" << building->m_SittingRoom << endl;
    cout << "好基友正在访问：" << building->m_BedRoom << endl;
};

void test01()
{
    GoodGay gg;
    gg.visit();
}
int main(int argc, char const *argv[])
{
    test01();

    return 0;
}
