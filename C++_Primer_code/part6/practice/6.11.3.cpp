#include <iostream>
using namespace std;

int main()
{
    char choice;
    cout << "Please enter one of the following choices: " << endl;
    cout << "c) carnicore\t"
         << "p) pianist" << endl;
    cout << "t) tree\t\t"
         << "g) game" << endl;
    cin.get(choice);
    while (isalpha(choice))
    {
        switch (choice)
        {
        case 'c':
            cout << "A maple is carnivore.\n";
            break;
        case 'p':
            cout << "A maple is pianist.\n";
            break;
        case 't':
            cout << "A maple is a tree.\n";
            break;
        case 'g':
            cout << "A maple is a game.\n";
            break;
        default:
            cout << "Please enter a c, p, t, or g: ";
            cin.ignore();
        }
        cin.get(choice);
    }
    return 0;
}