#include <iostream>
using namespace std;

bool isPerfect (int n)
{
    int sum = 1;
    for (int i = 2; i*i <= n; i++)
    {
        if (!(n % i))
        {
            if (i*i != n)
                sum += i + n/i;
            else sum += i;
        }
    }
    return (sum == n && n != 1);
}

int removePerfect (int * arr, int size)
{
    int i = 0, j = 0, count = 0;
    while (i < size && j < size)
    {
        while (isPerfect (arr[j]))
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

    int count = removePerfect (arr, size);
    cout << "Array after deleting perfect numbers: ";
    for (int i = 0; i < size - count; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}