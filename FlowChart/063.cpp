#include <iostream>
using namespace std;

int main ()
{
    cout << "a, b: ";
    int a, b;
    cin >> a >> b;

    int gcd = min(a, b);
    while (((a % gcd) || (b % gcd)))
        gcd--;

    int lcm = abs(a * b) / gcd;
    cout << "LCM: " << lcm << endl;

    return 0;
}