#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    double sum = 0;
    for (unsigned int i = n; i > 0; i--)
    {
        unsigned int j = i;
        unsigned int denominator = 0;
        while (j > 0)
        {
            denominator += j;
            j--;
        }
        sum += 1.0 / denominator;
    }

    cout << "S(n) = " << sum << endl;

    return 0;
}