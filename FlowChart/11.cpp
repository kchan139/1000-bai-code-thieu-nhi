#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    unsigned int sum = 0;
    for (unsigned int i = n; i > 0; i--)
    {
        unsigned int j = i;
        unsigned int tmpFactorial = 1;
        while (j > 0)
        {
            tmpFactorial *= j;
            j--;
        }
        sum += tmpFactorial;
    }

    cout << "S(n) = " << sum << endl;

    return 0;
}