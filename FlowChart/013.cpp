#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    cout << "x, n: ";
    double x;       cin >> x;
    unsigned int n; cin >> n;

    double sum = 0;
    for (unsigned int i = 2*n; i >= 2; i -= 2)
        sum += pow(x, i);

    cout << "S(n) = " << sum << endl;

    return 0;
}