#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    unsigned short count = 0;
    for (unsigned int i = 2; i * i <= n; i++)
        if (!(n % i))
            count++;

    (count)? cout << n << " is not " :
             cout << n << " is ";
    cout << "a prime number" << endl;

    return 0;
}