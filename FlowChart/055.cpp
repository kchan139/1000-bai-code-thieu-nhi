#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    unsigned int firstDigit = n;
    while (firstDigit / 10)
        firstDigit /= 10;

    unsigned int count = 0;
    while (n)
    {
        if (n % 10 == firstDigit)
            count++;
        n /= 10;
    }

    cout << "First digit count: " << count << endl;

    return 0;
}