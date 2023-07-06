#include <iostream>
using namespace std;

int main ()
{   
    cout << "n: ";
    unsigned int n; cin >> n;

    unsigned long sum = n * n * (n + 1) * (n + 1) / 4;

    cout << "S(n) = " << sum << endl;

    return 0;
}