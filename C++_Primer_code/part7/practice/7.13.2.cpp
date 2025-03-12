#include <iostream>
using namespace std;
double GetPoint(double ar[], int limit);
void ShowPoint(const double ar[], int n);
double AveOfPoint(double ar[], int n);
const int ArSize = 10;

int main()
{
    double scores[ArSize];
    int n = GetPoint(scores, ArSize);
    ShowPoint(scores, n);
    cout << "The average score is "
         << AveOfPoint(scores, n) << endl;

    return 0;
}

double GetPoint(double ar[], int limit)
{
    int i;
    double score;
    cout << "Enter the scores, 'q' to quit:\n";
    for (i = 0; i < limit; i++)
    {
        cout << "Enter the score # " << (i + 1) << ": ";
        cin >> score;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout << "Input process termianted\nQuit\n";
            break;
        }
        ar[i] = score;
    }
    return i;
}

void ShowPoint(const double ar[], int n)
{
    cout << "You entered " << n << " scores.\n";
    cout << "The scores are:\n";
    for (size_t i = 0; i < n; i++)
    {
        cout << ar[i] << "\t";
    }
}

double AveOfPoint(double ar[], int n)
{
    double sum = 0.0;
    for (size_t i = 0; i < n; i++)
    {
        sum += ar[i];
    }
    return sum / n;
}