#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    if (n < 2)
        cout << n << " is not a prime number" << endl;
    else
    {
        bool isPrime = true;
        for (unsigned int i = 2; i * i <= n; i++)
        {
            if (!(n % i))
            {
                isPrime = false;
                break;
            }
        }
        (isPrime)? 
            cout << n << " is a prime number" : 
            cout << n << " is not a prime number";
        cout << endl;
    }
}