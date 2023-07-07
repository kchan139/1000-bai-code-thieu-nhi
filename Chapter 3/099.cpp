#include <iostream>
using namespace std;

int main ()
{
    cout << "a, b, c: ";
    double a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {
        double tmp = a;
        a = b;
        b = tmp;
    }
    if (b > c) 
    {
        double tmp = b;
        b = c;
        c = tmp;
        
        if (a > b) 
        {
            double tmp2 = a;
            a = b;
            b = tmp2;
        }
    }

    cout << "* SORT *" << endl;
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;

    return 0;
}