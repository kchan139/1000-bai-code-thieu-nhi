#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    while (n && !(n & 1))
        n /= 10;
    
    (n)? cout << "Not all digits are even" : cout << "All digits are even";
    cout << endl;

    return 0;
}