#include <iostream>
using namespace std;

int main ()
{
    cout << "n (1 -> 10): ";
    unsigned short n; cin >> n;

    cout << "Multiplication table: " << endl;
    for (unsigned short i = 1; i <= 10; i++)
        cout << n << " * " << i << " = " << n * i << endl;
    cout << endl;

    return 0;
}