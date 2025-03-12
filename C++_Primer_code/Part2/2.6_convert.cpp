#include <iostream>
int stonetolb(int);
using namespace std;

int main()
{
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds.\n";

    return 0;
}

int stonetolb(int sts)
{
    int pounds = 14 * sts;
    return pounds;
}