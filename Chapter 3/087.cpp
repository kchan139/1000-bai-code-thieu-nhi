#include <iostream>
using namespace std;

int main ()
{
    cout << "Smallest positive number: ";

    unsigned int n = 1;
    unsigned int sum = 0;

    while (sum <= 10000)
        sum += n++;

    cout << n << endl;

    return 0;
}