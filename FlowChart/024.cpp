#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    cout << "All odd divisors of n: " << endl;
    for (unsigned int i = 1; i <= n; i += 2)
        if (!(n % i))
            cout << i << " ";
    cout << endl;

    return 0;
}