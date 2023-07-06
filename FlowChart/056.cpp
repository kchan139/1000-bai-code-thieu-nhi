#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    if (!n)
    {
        cout << "Not odd" << endl;
        return 0;
    }

    while (n && n & 1)
        n /= 10;

    (n)? cout << "Not all digits are odd" : cout << "All digits are odd";
    cout << endl;

    return 0;
}