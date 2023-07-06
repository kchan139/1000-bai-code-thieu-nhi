#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    if (!n)
    {
        cout << "Number of digits: 1" << endl;
        return 0;
    }

    unsigned int count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }

    cout << "Number of digits: " << count << endl;

    return 0;
}