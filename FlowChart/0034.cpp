#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    double sum = 0;
    for (int i = n - 1; i >= 0; i--)
        sum = sqrt((n - i) + sum);
    
    cout << "S(n) = " << sum << endl;

    return 0;
}