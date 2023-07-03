#include<iostream>
using namespace std;

int main ()
{
    cout << "x, n: ";
    int x, n; cin >> x >> n;

    for (int i = 1; i < n; i++)
        x *= x;

    cout << "pow (x, n) = " << x << endl;

    return 0;
}
