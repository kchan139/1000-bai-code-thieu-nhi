#include <iostream>
#include <unordered_map>
using namespace std;

int removeAllDup (int * arr, int size)
{
    unordered_map<int, int> frequency;
    int i = 0, j = 0, count = 0;

    for (int i = 0; i < size; i++)
        frequency[arr[i]]++;

    while (i < size && j < size)
    {
        while (frequency[arr[j]] > 1)
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

    cout << "Array after removing all duplicates: ";
    int count = removeAllDup (arr, size);
    for (int i = 0; i < size - count; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}