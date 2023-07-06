#include <iostream>
using namespace std;

int main ()
{
    cout << "a, b: ";
    unsigned int a, b;
    cin >> a >> b;

    unsigned int gcd = min (a, b);
    while ( (a % gcd) || (b % gcd) )
        gcd--;

    cout << "Greatest common divisor: " << gcd << endl;

    return 0;
}