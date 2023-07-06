#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    unsigned long product = 1;
    while (n)
    {
        product *= n % 10;
        n /= 10;
    }

    cout << "Product of all digits: " << product << endl;

    return 0;
}