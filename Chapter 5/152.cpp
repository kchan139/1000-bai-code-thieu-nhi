#include <iostream>
using namespace std;

bool isPerfect (int n)
{
    if (n < 6) return false;
    int sum = 0;
    for (int i = 1; i < n; i++)
        if (!(n % i)) sum += i;
    return sum == n;
}

int smallestPerfect (int * arr, unsigned int size)
{
    int min = 0;
    for (unsigned int i = 0; i < size; i++)
        if (isPerfect(arr[i]) && min > arr[i])
            min = arr[i];
    return min;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++) 
        cin >> arr[i];

    cout << "Smallest perfect number: " << smallestPerfect (arr, size) << endl;

    return 0;
}