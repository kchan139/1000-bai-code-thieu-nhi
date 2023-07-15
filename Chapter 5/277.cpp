#include <iostream>
using namespace std;

bool isPrime (int n)
{
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++)
        if (!(n % i)) return false;
    return true;
}

int removePrime(int * arr, int size)
{
    int i = 0, j = 0, count = 0;
    while (i < size && j < size)
    {
        while (isPrime (arr[j]))
        {
            count++;
            j++;
        }
        if (j >= size) break;

        arr[i++] = arr[j++];
    }
    return count;
}

int main ()
{
    cout << "Size: ";
    int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int count = removePrime (arr, size);
    cout << "Array after deleting prime numbers: ";
    for (int i = 0; i < size - count; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}