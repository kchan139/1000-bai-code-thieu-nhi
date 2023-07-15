#include <iostream>
using namespace std;

void reverse (int * arr, int size)
{
    for (int i = 0; i < size / 2; i++)
        swap (arr[i], arr[size - i - 1]);
}

int main ()
{
    cout << "Size: ";
    int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Array after: ";
    reverse (arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}