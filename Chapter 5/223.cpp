#include <iostream>
using namespace std;

bool isPrime (int n)
{
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++)
        if (!(n % i)) return false;
    return true;
}

int countPrime (int * arr, unsigned int size)
{
    int count = 0;
    for (unsigned int i = 0; i < size; i++)
        if (isPrime (arr[i])) count++;
    return count;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Number of prime numbers: " << countPrime (arr, size) << endl;

    return 0;
}