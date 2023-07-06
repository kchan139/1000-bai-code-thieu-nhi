#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    double factorial = 1;
    for (int i = 2; i <= n; i++)
        factorial *= i;

    cout << "T(n) = " << factorial << endl;

    return 0;
}