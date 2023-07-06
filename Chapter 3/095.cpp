#include <iostream>
using namespace std;

int main ()
{
    cout << "a, b, c: ";
    double a, b, c;
    cin >> a >> b >> c;

    if (a < 0) a *= -1;
    if (b < 0) b *= -1;
    if (c < 0) c *= -1;

    cout << ".abs() = " << a << " " << b << " " << c << endl;

    return 0;
}