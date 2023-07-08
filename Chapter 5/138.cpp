#include <iostream>
using namespace std;

int findFirstEven (int * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++)
        if (!(arr[i] & 1)) return i;
    return -1;
}

int main ()
{
    cout << "Size: " << endl;
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];
    
    cout << "Index of the first even element: " << findFirstEven(arr, size) << endl;

    return 0;
}