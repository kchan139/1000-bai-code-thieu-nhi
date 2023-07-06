#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    double sum = 0;
    for (unsigned int i = 0; i < n; i++)
        sum = sqrt(2 + sum);

    cout << "S(n) = " << sum << endl;

    return 0;
}