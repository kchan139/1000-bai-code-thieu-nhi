#include <iostream>
using namespace std;

bool isPrime(unsigned int n)
{
    if (n < 2) return false;
    for (unsigned int i = 2; i*i <= n; i++)
        if (!(n % i)) return false;
    return true;
}

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    for (unsigned int i = 2; i < n; i++)
        if (isPrime(i))
            cout << i << " ";
    cout << endl;

    return 0;
}