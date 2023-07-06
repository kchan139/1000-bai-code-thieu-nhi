#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;


    cout << "Digits count: ";
    if (n == 0)
        cout << 1 << endl;
    else
    {
        unsigned short count = 0;
        while (n)
        {
            count++;
            n /= 10;
        }
        cout << count << endl;
    }

    return 0;
}