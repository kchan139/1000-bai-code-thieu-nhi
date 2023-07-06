#include <iostream>
using namespace std;

int main ()
{
    cout << "a, b: ";
    double a, b;
    cin >> a >> b;

    cout << a << "x + " << b << " = 0" << endl;
    
    if (!(a || b))
        cout << "Infinitely many solutions" << endl;
    else if (!a)
        cout << "No solution" << endl;
    else
    {
        double x = -b / a;
        cout << "x = " << x << endl;
    }

    return 0;
}