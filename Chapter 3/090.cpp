#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    unsigned int m = 1;
    unsigned int sum = 0;

    while (sum < n)
        sum += m++;

    cout << "m: " << m << endl;

    return 0;
}