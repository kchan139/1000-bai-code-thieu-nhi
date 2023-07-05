#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    double sum = 0;
    for (unsigned int i = 1; i <= n; i++)
    {
        unsigned int j = i;
        unsigned int tmpFactorial = 1;

        while (j)
            tmpFactorial *= j--;

        sum = sqrt(tmpFactorial + sum);
    }

    cout << "S(n) = " << sum << endl;

    return 0;
}