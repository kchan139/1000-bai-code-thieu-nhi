#include <iostream>
using namespace std;

int removeAllValue(int * arr, int size, int x)
{
    int i = 0, j = 0, count = 0;
    while (i < size && j < size)
    {
        while (arr[j] == x)
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

    cout << "X: ";
    int x; cin >> x;

    int count = removeAllValue (arr, size, x);
    cout << "Array after removing all " << x << ": ";
    for (int i = 0; i < size - count; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}