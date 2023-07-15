#include <iostream>
using namespace std;

void shiftLeft (int * arr, int size)
{
    int tmp = arr[0];
    for (int i = 0; i < size - 1; i++)
        arr[i] = arr[i + 1];
    arr[size - 1] = tmp;
}

int main ()
{
    cout << "Size: ";
    int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "After left shifting one element: ";
    shiftLeft (arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}