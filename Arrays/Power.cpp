#include <iostream>
using namespace std;

double myPow(double x, int n)
{
    long binForm = n;
    double ans = 1;

    if (binForm < 0)
    {
        x = 1 / x;
        binForm = -binForm;
    }
    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans = ans * x;
        }
        x = x * x;
        binForm = binForm / 2;
    }
    return ans;
}

int main()
{
    double x = 2.0;
    int n = 10;
    cout << "Result: " << myPow(x, n) << endl; // Example usage
    return 0;
}