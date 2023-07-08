#include <iostream>
#include <cmath>
using namespace std;

bool isSquare (unsigned int n)
{
    unsigned int sqrt_n = sqrt(n);
    return sqrt_n * sqrt_n == n;
}

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    for (unsigned int i = 1; i < n; i++)
        if (isSquare(i))
            cout << i << " ";
    cout << endl;

    return 0;
}