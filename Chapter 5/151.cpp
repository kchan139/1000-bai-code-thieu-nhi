#include <iostream>
using namespace std;

bool isPrime (int n)
{
    if (n < 6) return false;
    for (int i = 2; i*i <= n; i++)
        if (!(n % i)) return false;
    return true;
}

int largestPrime (int * arr, unsigned int size)
{
    int largest = 0;
    for (unsigned int i = 0; i < size; i++)
        if (isPrime(arr[i]) && arr[i] > largest)
            largest = arr[i];
    return largest;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Largest prime: " << largestPrime (arr, size) << endl;

    return 0;
}