#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    cout << "n's divisors count: ";
    unsigned int count = 0;
    for (unsigned int i = 1; i <= n; i++)
        if (!(n % i))
            count++;
    cout << count << endl;

    return 0;
}