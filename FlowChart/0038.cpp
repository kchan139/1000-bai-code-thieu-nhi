#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    double sum = 0;
    for (unsigned int i = 1; i <= n; i++)
        sum = pow (i + sum, 1.0 / (i + 1));

    cout << "S(n) = " << sum << endl;

    return 0;
}