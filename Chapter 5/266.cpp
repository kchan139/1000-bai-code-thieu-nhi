#include <iostream>
using namespace std;

void insert (int * arr, unsigned int size, int value, unsigned int position)
{
    if (position > size) position = size;
    for (unsigned int i = size; i >= position; i--)
        arr[i] = arr[i - 1];
    arr[position] = value;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    const unsigned int rielSize = 256;
    int arr[rielSize];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Value, insert position: ";
    int val; unsigned int pos; 
    cin >> val >> pos;

    cout << "Array after insertion: ";
    insert (arr, size, val, pos);

    for (unsigned int i = 0; i <= size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}