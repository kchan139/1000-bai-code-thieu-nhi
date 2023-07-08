#include <iostream>
#include <cmath>
using namespace std;

bool isAmstrongNumber (unsigned int n)
{
    unsigned short sum = 0;

    unsigned int tmp = n;
    unsigned short digits = 0;
    while (tmp)
    {
        digits++;
        tmp /= 10;
    }

    tmp = n;
    while (tmp)
    {
        sum += pow(tmp % 10, digits);
        tmp /= 10;
    }
    return sum == n;
}

int main ()
{
    unsigned int lower_bound = 1,
                 upper_bound = 1000000;

    for (unsigned int i = lower_bound; i <= upper_bound; i++)
        if (isAmstrongNumber(i))
            cout << i << " ";
    cout << endl;

    return 0;
}