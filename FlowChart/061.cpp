#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    unsigned short tmp = 0;
    while (n && (n % 10 >= tmp))
    {
        tmp = n % 10;
        n /= 10;
    }

    (n)? cout << "NO" : cout << "YES";
    cout << endl;

    return 0;
}