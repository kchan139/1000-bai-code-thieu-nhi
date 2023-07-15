#include <iostream>
#include <unordered_set>
using namespace std;

int removeDup (int * arr, int size)
{
    unordered_set<int> unique;
    int i = 0, j = 0, count = 0;

    while (i < size && j < size)
    {
        unique.insert(arr[j]);
        arr[i++] = arr[j++];

        if (j >= size) break;

        while (unique.count(arr[j]))
        {
            count++;
            j++;
        }
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

    cout << "Array after removing duplicates: ";
    int count = removeDup (arr, size);
    for (int i = 0; i < size - count; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}