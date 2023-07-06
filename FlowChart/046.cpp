#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    unsigned int count = 0;
    while (n)
    {
        count += n & 1;
        n /= 10;
    }

    cout << "Odd digits count: " << count << endl;

    return 0;
}