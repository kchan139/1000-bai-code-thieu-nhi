#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    while (!(n % 3)) n /= 3;

    cout << "Is " << n << " a power of 3? ";
    (n == 1)? cout << "YES" : cout << "NO";
    cout << endl;

    return 0;
}