#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    unsigned int k = n - 1;
    unsigned int sum = k * (k + 1) / 2;
    while (sum >= n)
    {
        k--;
        sum = k * (k + 1) / 2;
    }

    cout << "k: " << k << endl;

    return 0;
}