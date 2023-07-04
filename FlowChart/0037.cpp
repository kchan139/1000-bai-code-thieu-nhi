#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    double sum = sqrt(2);
    for (unsigned int i = 3; i <= n; i++)
        sum = pow (i + sum, 1.0 / i);

    cout << "S(n) = " << sum << endl;

    return 0;
}