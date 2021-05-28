#include <iostream>
using namespace std;
int func_mice(void);
int func_run(void);

int main()
{
    func_mice();
    func_mice();

    func_run();
    func_run();

    return 0;
}

int func_mice(void)
{
    cout << "Three blind mice.\n";

    return 0;
}

int func_run(void)
{
    cout << "See how they run.\n";

    return 0;
}