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
    while (n)
    {
        reversed += (n % 10) * digit;
        n /= 10; digit /= 10;
    }

    cout << "Reversed number: " << reversed << endl;

    return 0;
}