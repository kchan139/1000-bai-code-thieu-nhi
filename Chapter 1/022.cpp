#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    cout << "Product of all divisors of n: ";
    unsigned long long product = 1;
    for (unsigned int i = 1; i <= n; i++)
        if (!(n % i))
            product *= i;
    cout << product << endl;

    return 0;
}