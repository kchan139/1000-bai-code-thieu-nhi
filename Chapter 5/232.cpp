#include <iostream>
#include <algorithm>
using namespace std;

void listElementsAppearMoreThanOnce (int * arr, unsigned int size)
{
    sort (arr, arr + size);
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] == arr[i - 1]) 
        {
            cout << arr[i - 1] << " ";
            while (i < size && arr[i] == arr[i - 1])
                i++;
        }
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

    listElementsAppearMoreThanOnce (arr, size);

    return 0;
}