#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    cout << "x: ";
    double x; cin >> x;

    double sum = x;
    for (unsigned short i = 1; i <= 10; i++)
    {
        unsigned short j = 2*i + 1;
        unsigned int jFactorial = 1;
        
        while (j) jFactorial *= j--;

        sum += pow(-1, i) * (pow(x, 2*i + 1) / jFactorial);
    }

    cout << "sin(x) computed with Taylor expansion = " << sum << endl;
    cout << "riel sin(x): " << sin(x) << endl;

    return 0;
}