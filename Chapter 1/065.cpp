#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    cout << "a, b, c: ";
    double a, b, c;
    cin >> a >> b >> c;

    double x1, x2;
    double discriminant, real, imaginary;
    discriminant = b*b - 4*a*c;
    
    cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl;

    if (discriminant > 0) 
    {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (discriminant == 0) 
    {
        x1 = -b / (2*a);
        cout << "x1 = x2 = " << x1 << endl;
    }
    else 
    {
        real      = -b / (2*a);
        imaginary = sqrt(-discriminant) / (2*a);
        cout << "x1 = " << real << "+" << imaginary << "i" << endl;
        cout << "x2 = " << real << "-" << imaginary << "i" << endl;
    }

    return 0;
}