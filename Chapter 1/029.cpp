#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    for (unsigned int i = n - 1; i > 0; i--)    
    {
        if ((i & 1) && !(n % i))
        {
            cout << "Largest odd divisors: " << i << endl;
            break;
        }
    }

    return 0;
}