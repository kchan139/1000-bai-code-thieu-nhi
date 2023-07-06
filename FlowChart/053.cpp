#include <iostream>
using namespace std;

int main ()
{
    cout << "n: ";
    unsigned int n; cin >> n;

    unsigned short max = 0;
    unsigned int tmp   = n;
    while (tmp)
    {
        if (max < tmp % 10)
            max = tmp % 10;
        tmp /= 10;
    }

    unsigned int count = 0;
    while (n)
    {
        if (n % 10 == max)
            count++;
        n /= 10;
    }

    cout << "Largest digits count: " << count << endl;

    return 0;
}