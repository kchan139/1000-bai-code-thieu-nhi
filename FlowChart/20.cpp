#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    cout << "All divisors of n: " << endl;
    for (unsigned int i = 1; i <= n; i++)
        if (!(n % i))
            cout << i << " ";
    cout << endl;

    return 0;
}