#include <iostream>
#include <unordered_set>
using namespace std;

bool isPrime (int n)
{
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++)
        if (!(n % i)) return false;
    return true;
}

int countDistinctPrime (int * arr, unsigned int size)
{
    unordered_set <int> primes;
    int count = 0;
    for (unsigned int i = 0; i < size; i++)
    {
        if (isPrime(arr[i]) && !primes.count(arr[i]))
        {
            primes.insert(arr[i]);
            count++;
        }
    }
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

    cout << "Number of distinct prime elements: " << countDistinctPrime (arr, size) << endl;

    return 0;
}