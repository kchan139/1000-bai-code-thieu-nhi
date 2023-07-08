#include <iostream>
using namespace std;

int lastEven (int * arr, unsigned int size)
{
    for (int i = size - 1; i >= 0; i--)
        if (!(arr[i] & 1)) return arr[i];
    return -1;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Last even element: " << endl;

    return 0;
}