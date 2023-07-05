#include <iostream>
using namespace std;

int main ()
{
    cout << "x, n: ";
    double x;       cin >> x;
    unsigned int n; cin >> n;
    
    double sum = 0;
    for (unsigned int i = n; i > 0; i--)
    {
        unsigned int j = i;
        double tmpPow = 1;
        while (j > 0)
        {
            tmpPow *= x;
            j--;
        }
        sum += tmpPow;
    }

    cout << "S(n) = " << sum << endl;

    return 0;
}