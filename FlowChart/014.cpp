#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    cout << "x, n: ";
    double x;       cin >> x;
    unsigned int n; cin >> n;

    double sum = x;
    for (int i = 3; i <= 2*n + 1; i += 2)
        sum += pow(x, i);

    cout << "S(n) = " << sum << endl;

    return 0;
}