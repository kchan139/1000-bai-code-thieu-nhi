#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    cout << "x, n: ";
    double x; unsigned int n;
    cin >> x >> n;

    double sum = x;
    for (unsigned int i = 1; i <= n; i++)
    {
        unsigned int j = 2*i + 1;
        unsigned int tmpFactorial = 1;
        
        while (j)
            tmpFactorial *= j--;

        sum += pow(-1, i) * (pow(x, 2*i + 1) / tmpFactorial);
    }

    cout << "S(x, n) = " << sum << endl;

    return 0;
}