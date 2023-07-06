#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    cout << "Is " << n << " a power of 2? ";

    unsigned short bit1_count = 0;
    while (n) 
    {
        if (n & 1) bit1_count++;
        n >>= 1;
    }
    
    (bit1_count == 1)? 
        cout << "YES" : cout << "NO";
    cout << endl;

    return 0;
}