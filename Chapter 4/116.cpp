#include <iostream>
using namespace std;

unsigned long sum (unsigned int n)
    { return n * (n + 1) / 2; }

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    cout << "S(" << n << ") = " << sum(n) << endl;

    return 0;
}