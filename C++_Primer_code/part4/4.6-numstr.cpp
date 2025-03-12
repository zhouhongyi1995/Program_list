#include <iostream>
using namespace std;

int main()
{
        int year;
        char address[80];
        cout << "What year was your house built?\n";
        cin >> year;
        cin.get();              //ruguo meiyou zhege ,shangyihang mowei shuru de kongbaifu jiangbei baoliu
                                //yizhiyu xiamian de cin.getline duqu buliao rehe shuru.
        cout << "What is its street address?\n";
        cin.getline(address,80);
        cout << "Year built: " << year << endl;
        cout << "Address: " << address << endl;
        cout << "Done!\n";

        return 0;
}