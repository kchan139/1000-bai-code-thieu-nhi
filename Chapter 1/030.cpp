#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    unsigned int sum = 0;
    for (unsigned int i = 1; i < n; i++)
        if (!(n % i))
            sum += i;

    (sum == n)? cout << n << " is " : cout << n << " is not ";
    cout << "a perfect number" << endl;
    
    return 0;
}