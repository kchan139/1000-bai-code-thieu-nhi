#include <iostream>
using namespace std;

int main ()
{
    cout << "a, b: ";
    double a, b;
    cin >> a >> b;

    double x = -b / a;
    cout << a <<"x + " << b << " = 0" << endl;
    cout << "x = " << x << endl;
}