#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    unsigned int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }

    cout << "Sum of all digits: " << sum << endl;

    return 0;
}