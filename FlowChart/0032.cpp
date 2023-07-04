#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    for (unsigned int i = 1; i * i <= n; i++)
    {
        if (i * i == n)
        {
            cout << n << " is a square number" << endl;
            return 0;
        }
    }
    cout << n << " is not a square number";

    return 0;
}