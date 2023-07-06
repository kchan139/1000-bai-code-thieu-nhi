#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    unsigned int sum = 0;
    for (unsigned int i = 1; i <= n; i += 2)
        sum += i;

    cout << "Sum of all odd numbers smaller than " << n << ": "
         << sum << endl;

    return 0;
}