#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;
    
    double x = 2; // hard-coded x

    double sum = 0;
    for (unsigned int i = 1; i <= n; i++)
        sum = sqrt(pow(x, i) + sum);

    cout << "S(n) = " << sum << endl;

    return 0;
}