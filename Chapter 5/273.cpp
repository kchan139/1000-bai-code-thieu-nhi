#include <iostream>
using namespace std;

int removeNegative (double * arr, int size)
{
    int i = 0, j = 0, count = 0;
    while (i < size && j < size)
    {
        while (arr[j] < 0)
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
    double arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Array after removing negative elements: ";
    int count = removeNegative (arr, size);
    for (int i = 0; i < size - count; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}