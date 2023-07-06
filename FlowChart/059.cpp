#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    unsigned int digit = 1;
    unsigned int tmp = n;
    while (tmp / 10)
    {
        digit *= 10;
        tmp /= 10;
    }

    unsigned int reversed = 0;
    tmp = n;
    while (tmp)
    {
        reversed += (tmp % 10) * digit;
        tmp /= 10; digit /= 10;
    }

    (n == reversed)? cout << "Isometric" : cout << "Not isometric";
    cout << endl;

    return 0;
}