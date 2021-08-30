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
    CandyBar snack[3] =
        {
            {
                "Mocha Munch",
                2.3,
                350,
            },
            {
                "zhouhongyi",
                2.8,
                330,
            },
        };
    cout << snack[0].Brand << "\n"
         << snack[1].Calorie << "\n"
         << snack[2].Brand << endl;     //weifuzhi ,shuchu wei kongbai 

    return 0;
}