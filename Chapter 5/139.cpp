#include <iostream>
#include <cmath>
using namespace std;

bool isPerfect (long long n)
{
    if (n < 6) return false;
    long long sum = 1;
    for (long long i = 2; i < n; i++)
        if (!(n % i)) sum += i;
    return sum == n;
}

int idxOfLastPerfectNumber (long long * arr, unsigned int size)
{
    for (int i = size - 1; i >= 0; i--) 
        if (isPerfect(arr[i])) return i;
    return -1;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    long long arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Index of last perfect number: " << idxOfLastPerfectNumber(arr, size) << endl;
    
    return 0;
}