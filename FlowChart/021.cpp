#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    cout << "Sum of all divisors of n: ";
    unsigned int sum = 0;
    for (unsigned int i = 1; i <= n; i++)
        if (!(n % i))
            sum += i;

    cout << sum << endl;

    return 0;
}