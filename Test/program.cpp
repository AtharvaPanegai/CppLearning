#include <iostream>
using namespace std;

class FactSeries
{
public:
    int factorialNumber(int num)
    {

        int factorial = 1;
        for (int i = 2; i <= num; i++)
        {
            factorial *= i;
        }
        return factorial;
    }
};

int main()
{
    FactSeries f;
    int n;
    int sum = 0;
    cout << "Enter the number of terms : ";
    cin >> n;
    int count = 0;
    int i = 1;

    while (n != count)
    {
        sum += f.factorialNumber(i);
        cout << sum << "\n";
        i += 2;
        count++;
    }

    cout << "The sum of series is " << sum;
}