#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    double sum = 0;
    for (unsigned int i = 1, j = 2; i <= 2*n + 1; i += 2, j += 2)
        sum += (double) i / j;

    cout << "S(n) = " << sum << endl;

    return 0;
}