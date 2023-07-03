#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    unsigned int sum = n * (n + 1) / 2;
    cout << "S(n) = " << sum << endl;

    return 0;
}