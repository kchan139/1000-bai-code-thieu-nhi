#include <iostream>
using namespace std;

bool isPerfect (int n)
{
    if (n < 6) return false;
    int sum = 1;
    for (int i = 2; i < n; i++) 
        if (!(n % i)) sum += i;
    return sum == n;
}

int firstPerfect (int * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++)
        if (isPerfect(arr[i])) return arr[i];
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

    cout << "First perfect number: " << firstPerfect (arr, size) << endl;

    return 0;
}