#include <iostream>
using namespace std;

bool isPrime (int n)
{
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++)
        if (!(n % i)) return false;
    return true;
}

void bubbleSort (int * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size - 1; i++)
        for (unsigned int j = i + 1; j < size; j++)
            if (arr[i] > arr[j])
                swap (arr[i], arr[j]);
}

int smallestPrimeButLargerThanAllOthers (int * arr, unsigned int size)
{
    bubbleSort (arr, size);
    
    int i = size - 1;
    while (i >= 0 && isPrime(arr[i - 1])) i--;

    return (isPrime(arr[i]))? arr[i] : 0;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Smallest prime number but larger than all other elements: "
         << smallestPrimeButLargerThanAllOthers (arr, size) << endl;

    return 0;
}