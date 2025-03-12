#include <iostream>
using namespace std;

class BasePage
{
public:
    void header()
    {
        cout << "首页、公开课、登录、注册...(公共头部) " << endl;
    }
    void footer()
    {
        cout << "帮助中心、交流合作、站内地图...(公共底部) " << endl;
    }
    void left()
    {
        cout << "Java,Python,C++...(公共分类列表)" << endl;
    }
};

class Java : public BasePage
{
public:
    void content()
    {
        cout << "Java学科视频:" << endl;
    }
};

class Python : public BasePage
{
public:
    void content()
    {
        cout << "Python学科视频:" << endl;
    }
};

class CPP : public BasePage
{
public:
    void content()
    {
        cout << "C++学科视频:" << endl;
    }
};

void test()
{
    Java ja;
    cout << "Java下载视频页面如下:" << endl;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();
    cout << "---------------------" << endl;

    Python py;
    cout << "Python下载视频页面如下:" << endl;
    py.header();
    py.footer();
    py.left();
    py.content();
    cout << "---------------------" << endl;

    CPP cp;
    cout << "C++下载视频页面如下:" << endl;
    cp.header();
    cp.footer();
    cp.left();
    cp.content();
    cout << "---------------------" << endl;
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}
