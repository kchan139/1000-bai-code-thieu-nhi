#include <iostream>
#include <cmath>
using namespace std;

unsigned long long sum (double x, unsigned int n)
{
    unsigned long long sum = 0;
    for (unsigned int i = 1; i <= n; i++)
        sum += pow(x, i);
    return sum;
}

int main ()
{
    cout << "x, n: ";
    double x; unsigned int n; 
    cin >> x >> n;

    cout << "S(" << x << ", " << n << ") = "
         << sum(x, n) << endl;

    return 0;
}