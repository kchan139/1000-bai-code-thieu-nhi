#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    cout << "Sum of all even divisors of n: ";
    unsigned int sum = 0;
    for (unsigned int i = 2; i <= n; i += 2)
        if (!(n % i))
            sum += i;
    cout << sum << endl;

    return 0;
}