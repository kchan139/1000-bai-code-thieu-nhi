#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    unsigned int sum = 1;
    for (int i = 2; i <= n; i++)
        sum += i*i;

    cout << "S(n) = " << sum << endl;

    return 0;
}