#include <iostream>
using namespace std;

int main ()
{
    cout << "a, b: ";
    double a, b;
    cin >> a >> b;

    (a * b > 0) ? 
        cout << "SAME SIGN" : cout << "NOT SAME SIGN";
    cout << endl; 

    return 0;
}