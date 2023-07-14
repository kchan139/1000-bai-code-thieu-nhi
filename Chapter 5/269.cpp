#include <iostream>
using namespace std;

void insert (int * arr, int size, int value)
{
    int i = size;
    for (; i > 0 && arr[i - 1] > value; i--)
        arr[i] = arr[i - 1];
    arr[i] = value;
}

int main ()
{
    cout << "Size: ";
    int size; cin >> size;

    cout << "Elements (in ascending order): ";
    const int rielSize = 256;
    int arr[rielSize];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Insert value: ";
    int value; cin >> value;
    insert (arr, size, value);

    cout << "Array after insertion: ";
    for (int i = 0; i <= size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}