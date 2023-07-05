#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    double x = 2;
    cout << "n: ";
    unsigned int n; cin >> n;

    double sum = 1 + x;
    for (unsigned int i = 3; i <= 2*n + 1; i += 2)
    {
        unsigned int j = i;
        unsigned int tmpFactorial = 1;
        while (j > 0)
        {
            tmpFactorial *= j;
            j--;
        }
        sum += pow(x, i) / tmpFactorial;
    }

    cout << "S(n) = " << sum << endl;

    return 0;
}