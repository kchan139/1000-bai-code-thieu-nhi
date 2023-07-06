#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    unsigned short max = 0;
    while (n)
    {
        if (max < n % 10)
            max = n % 10;
        n /= 10;
    }

    cout << "Largest digit: " << max << endl;

    return 0;
}