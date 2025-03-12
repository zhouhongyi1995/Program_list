#include <iostream>
#include <fstream>
using namespace std;
void carinfo();

int main()
{
    //carinfo();shuru huancun wenti ,weineng shixian

    char infilename[30];
    ifstream inFile;
    cout << "Enter the name of data file: ";
    cin.getline(infilename, 30);
    inFile.open(infilename);
    if (!inFile.is_open())
    {
        cout << "Could not open the file: " << infilename << endl;
        exit(EXIT_FAILURE);
    }
    int count = 0;
    char str;
    inFile >> str;
    while (inFile.good())
    {
        count++;
        inFile >> str;
    }
    if (inFile.eof())
    {
        cout << "End of file reached.\n";
    }
    inFile.close();
    cout << "The total number of characters is " << count << endl;

    return 0;
}
void carinfo()
{
    char automobile[50];
    int year;
    double a_price;
    double d_price;
    char outfilename[30];
    ofstream outFile;
    cout << "Enter the name of outfile: ";
    cin.getline(outfilename, 30);
    outFile.open(outfilename);
    cout << "Enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    cout << fixed;
    cout.precision(3);
    cout.setf(ios_base::showpoint);
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking $" << a_price << endl;
    cout << "Now asking $" << d_price << endl;

    outFile << fixed;
    outFile.precision(3);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking $" << a_price << endl;
    outFile << "Now asking $" << d_price << endl;

    outFile.close();
}