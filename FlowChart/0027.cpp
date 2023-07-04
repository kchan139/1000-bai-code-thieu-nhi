#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    unsigned int count = 0;
    for (unsigned int i = 2; i <= n; i += 2)
        if (!(n % i))
            count++;

    cout << "Numbers of even divisors: " << count << endl;

    return 0;
}