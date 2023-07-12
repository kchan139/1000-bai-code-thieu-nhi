#include <iostream>
using namespace std;

int count (int * arr, unsigned int size)
{
    int count = 0;
    for (unsigned int i = size - 1; i > 0; i--)
        if (arr[i] * arr[i - 1] > 0 && abs(arr[i]) > abs(arr[i - 1]))
            count++;
    return count;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Counted: " << count (arr, size) << endl;

    return 0;
}