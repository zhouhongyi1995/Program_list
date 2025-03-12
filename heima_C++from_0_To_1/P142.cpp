#include <iostream>
using namespace std;

//抽象不同零件类
class CPU
{
public:
    virtual void calculate() = 0;
};

class VideoCard
{
public:
    virtual void display() = 0;
};

class Memory
{
public:
    virtual void storage() = 0;
};

class Computer
{
public:
    Computer(CPU *cpu, VideoCard *vc, Memory *mem)
    {
        m_cpu = cpu;
        m_vc = vc;
        m_mem = mem;
    }
    void work()
    {
        m_cpu->calculate();
        m_vc->display();
        m_mem->storage();
    }
    ~Computer()
    {
        if (m_cpu != NULL)
        {
            delete m_cpu;
            m_cpu = NULL;
        }
        if (m_vc != NULL)
        {
            delete m_vc;
            m_vc = NULL;
        }
        if (m_mem != NULL)
        {
            delete m_mem;
            m_mem = NULL;
        }
    }

private:
    CPU *m_cpu;
    VideoCard *m_vc;
    Memory *m_mem;
};

class IntelCPU : public CPU
{
public:
    virtual void calculate()
    {
        cout << "Intel 的CPU开始计算了！" << endl;
    }
};
class IntelVideoCard : public VideoCard
{
    virtual void display()
    {
        cout << "Inel 的显卡开始显示了！" << endl;
    }
};
class IntelMemory : public Memory
{
    virtual void storage()
    {
        cout << "Intel 的内存条开始存储了！" << endl;
    }
};

class LenovoCPU : public CPU
{
public:
    virtual void calculate()
    {
        cout << "Lenovo的CPU开始计算了！" << endl;
    }
};
class LenovoVideoCard : public VideoCard
{
    virtual void display()
    {
        cout << "Lenovo的显卡开始显示了！" << endl;
    }
};
class LenovoMemory : public Memory
{
    virtual void storage()
    {
        cout << "Lenovo的内存条开始存储了！" << endl;
    }
};

void test01()
{
    CPU *intelCpu = new IntelCPU;
    VideoCard *intelCard = new IntelVideoCard;
    Memory *intelMemroy = new IntelMemory;

    Computer *computer1 = new Computer(intelCpu, intelCard, intelMemroy);
    computer1->work();
    delete computer1;

    cout << "-----------------" << endl;
    Computer *computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
    computer2->work();
    delete computer2;
}

int main(int argc, char const *argv[])
{
    test01();

    return 0;
}
