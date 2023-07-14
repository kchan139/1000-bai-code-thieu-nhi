#include <iostream>
#include <vector>
using namespace std;

bool isPrime (int n)
{
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++)
        if (!(n % i)) return false;
    return true;
}

void sortPrime (int * arr, unsigned int size)
{
    vector<int> primeIndex;
    for (unsigned int i = 0; i < size; i++)
        if (isPrime(arr[i]))
            primeIndex.push_back(i);

    int vtsize = primeIndex.size();

    for (int i = 0; i < vtsize - 1; i++)
        for (int j = i + 1; j < vtsize; j++)
            if (arr[primeIndex[i]] > arr[primeIndex[j]])
                swap (arr[primeIndex[i]], arr[primeIndex[j]]);
}

void printArr (int * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)   
        cin >> arr[i];

    cout << "Unsorted: " << endl;
    printArr (arr, size);

    cout << "Prime number sorted: " << endl;
    sortPrime (arr, size);
    printArr (arr, size);

    return 0;
}