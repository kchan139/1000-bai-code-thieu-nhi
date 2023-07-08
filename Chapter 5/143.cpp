#include <iostream>
using namespace std;

int firstEven (int * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++)
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

    cout << "First even number: " << firstEven (arr, size) << endl;

    return 0;
}