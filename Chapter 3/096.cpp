#include <iostream>
using namespace std;

int main ()
{
    cout << "x = ";
    double x; cin >> x;

    double fx = 0;
    if (x >= 5)
    {
        fx = 2*x*x + 5*x + 9;
        cout << "f(x) = 2x^2 + 5x + 9 = " << x << endl;
    }
    else
    {
        fx = -2*x*x + 4*x - 9;
        cout << "f(x) = -2x^2 + 4x - 9 = " << x << endl;
    }

    return 0;
}