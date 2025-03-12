#include <iostream>
const int ArSize = 50;
struct bop
{
    char fullname[ArSize];
    char title[ArSize];
    char bopname[ArSize];
    int preference;
};

int main()
{
    bop a =
        {
            "Wimp Macho",
            "Raki Rhodes",
            "Celia Laiter",
            1,
        };
    bop d =
        {
            "Wimp Macho",
            "Junior Programmer",
            "MIPS",
            0,
        };
    cout << "Benevolent Order of Programmers Rrport" << endl;
    cout << "a. dispaly by name\t\t";
    cout << "b. dispaly by title\n";
    cout << "c. display by bopname\t\t";
    cout << "d. display by preference\n";
    cout << "q. quit\n";

    cout << "Enter your choice: ";
    char choice;
    cin >> choice;
    while (choice != 'q')
    {
        switch (choice)
        {
        case 'a':
            cout << a.bopname << a.fullname << a.preference << a.title << endl;
            break;
        case 'd':
            cout << d.bopname << d.fullname << d.preference << d.title << endl;
            break;
        }
        cout << "Enter your choice: ";
        cin >> choice;
    }

    cout << "Bye!\n";

    return 0;
}