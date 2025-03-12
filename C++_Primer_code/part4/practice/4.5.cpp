#include <iostream>
using namespace std;
struct CandyBar
{
    string Brand;
    double Wight;
    int Calorie;
};

int main()
{
    CandyBar snack =
        {
            "Mocha Munch",
            2.3,
            350,
        };
    cout << snack.Brand << "\n"
         << snack.Wight << "\n"
         << snack.Calorie << endl;

    return 0;
}
