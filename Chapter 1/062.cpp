#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    cout << "a, b: ";
    unsigned int a, b;
    cin >> a >> b;

    unsigned int gcd = min (a, b);
    while ( (a % gcd) || (b % gcd) )
        gcd--;

    cout << "GCD: " << gcd << endl;

    return 0;
}