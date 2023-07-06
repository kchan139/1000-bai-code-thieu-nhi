#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    while (n / 10)
        n /= 10;
    
    cout << "First digit: " << n << endl;

    return 0;
}