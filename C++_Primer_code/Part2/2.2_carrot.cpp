#include <iostream>
using namespace std;

int main()
{
    int carrots;

    carrots = 25;
    cout << "I have ";
    cout << carrots;
    cout << " carrots.\n";

    carrots = carrots - 1;
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;

    cout << sizeof(carrots);

    return 0;

}