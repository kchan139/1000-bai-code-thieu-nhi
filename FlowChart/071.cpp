#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    cout << "x, n: ";
    double x; unsigned int n;
    cin >> x >> n;

    double sum = 0;
    for (unsigned int i = 1; i <= n; i++)
    {
        unsigned int j = i;
        unsigned int tmpSum = 0;
        
        while (j)
            tmpSum += j--;

        sum += pow (-1, i) * (pow(x, i) / tmpSum);
    }

    cout << "S(x, n) = " << sum << endl;

    return 0;
}