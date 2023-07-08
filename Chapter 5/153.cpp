#include <iostream>
using namespace std;

int smallestEven (int * arr, unsigned int size)
{
    int min = -1;
    for (unsigned int i = 0; i < size; i++)
        if (!(arr[i] & 1))
            if (min == -1 || min > arr[i])
                min = arr[i];
    return min;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Smallest even number: " << smallestEven (arr, size) << endl;

    return 0;
}