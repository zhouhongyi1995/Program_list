#include <iostream>
using namespace std;
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void display(box temp);
float cal(box *temp);

int main()
{
    cout << "The following is the example box.\n";
    box temp;
    cout << "Enter the box maker: ";
    cin >> temp.maker;
    cout << "Enter the box height: ";
    cin >> temp.height;
    cout << "Enter the box width: ";
    cin >> temp.width;
    cout << "Enter the box length: ";
    cin >> temp.length;
    cout << "Enter the box volume: ";
    cin >> temp.volume;

    display(temp);

    cout << "\nBut after the calulation , the volume of the box is "
         << cal(&temp);

    return 0;
}

void display(box temp)
{
    cout << "\nThe maker of the box is " << temp.maker << "." << endl;
    cout << "\nThe height of the box is " << temp.height << "." << endl;
    cout << "\nThe width of the box is " << temp.width << "." << endl;
    cout << "\nThe length of the box is " << temp.length << "." << endl;
    cout << "\nThe volume of the box is " << temp.volume << "." << endl;
}

float cal(box *temp)
{
    return temp->height * temp->width * temp->length;
}