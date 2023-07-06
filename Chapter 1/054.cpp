#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    unsigned short min = 9;
    unsigned int tmp   = n;
    while (tmp)
    {
        if (min > tmp % 10)
            min = tmp % 10;
        tmp /= 10;
    }

    unsigned int count = 0;
    while (n)
    {
        if (n % 10 == min)
            count++;
        n /= 10;
    }

    cout << "Smallest digits count: " << count << endl;

    return 0;
}