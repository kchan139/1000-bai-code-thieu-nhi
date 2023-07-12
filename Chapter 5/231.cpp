#include <iostream>
#include <algorithm>
using namespace std;

void listElementsAppearOnce (int * arr, unsigned int size)
{
    sort (arr, arr + size);
    for (unsigned int i = 0; i < size; i++)
    {
        if ((!i || arr[i - 1] != arr[i]) && 
            (i == size - 1 || arr[i] != arr[i + 1]))
                cout << arr[i] << " ";
    }
    cout << endl;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    listElementsAppearOnce (arr, size);

    return 0;
}