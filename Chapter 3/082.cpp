#include <iostream>
using namespace std;

int main ()
{
    cout << "a, b, c: ";
    double a, b, c;
    cin >> a >> b >> c;

    double max = a;
    if (max < b) max = b;
    if (max < c) max = c;

    cout << "MAX: " << max << endl;

    return 0;
}