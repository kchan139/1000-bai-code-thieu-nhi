#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    unsigned int sum = 0;
    for (int i = 1; i < n; i++)
        if (!(n % i))
            sum += i;

    cout << "Sum of all divisors smaller than " << n << ": " << sum << endl;

    return 0;
}