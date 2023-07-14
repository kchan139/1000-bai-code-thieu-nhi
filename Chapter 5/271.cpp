#include <iostream>
using namespace std;

void erase (int * arr, int size, int position)
{
    if (position < 0)     position = 0;
    if (position >= size) return;

    for (int i = position; i < size - 1; i++)
        arr[i] = arr[i + 1];
}

int main ()
{
    cout << "Size: ";
    int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Delete at position: ";
    int position; cin >> position;

    cout << "Array after deletion: ";
    erase (arr, size, position);
    for (int i = 0; i < size - 1; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}