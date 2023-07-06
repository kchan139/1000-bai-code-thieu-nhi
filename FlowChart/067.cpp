#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    cout << "x, n: ";
    double x; unsigned int n;
    cin >> x >> n;

    double sum = 0;
    for (unsigned int i = 1; i <= n; i++)
        sum += pow(-1, i + 1) * pow(x, i);
    
    cout << "S(x, n) = " << sum << endl;

    return 0;
}