#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    cout << "x, n: ";
    double x; unsigned int n;
    cin >> x >> n;

    cout << "S = " << pow(x, 1.0 / n) << endl;

    return 0;
}