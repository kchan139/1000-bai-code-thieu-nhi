#include <iostream>
using namespace std;

bool isPrime (int n)
{
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++)
        if (!(n % i)) return false;
    return true;
}

int firstPrime (int * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++)
        if (isPrime(arr[i])) return arr[i];
    return -1;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "First prime number: " << firstPrime (arr, size) << endl;
    
    return 0;
}