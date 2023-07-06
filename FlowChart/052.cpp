#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    unsigned short min = 9;
    while (n)
    {
        if (min > n % 10)
            min = n % 10;
        n /= 10;
    }

    cout << "Smallest digit: " << min << endl;

    return 0;
}