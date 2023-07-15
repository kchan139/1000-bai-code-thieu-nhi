#include <iostream>
using namespace std;

void moveOnesToHead (int * arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int j = i + 1;
        while (j > 0 && arr[j] == 1 && arr[j - 1] != 1)
        {
            swap (arr[j], arr[j - 1]);
            j--;
        }
    }
}

int main ()
{
    cout << "Size: ";
    int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "After moving: ";
    moveOnesToHead (arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}