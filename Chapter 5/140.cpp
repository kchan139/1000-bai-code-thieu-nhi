#include <iostream>
using namespace std;

double minPositive (double * arr, unsigned int size)
{
    unsigned int i = 0;
    double min     = -1;
    while (i < size && arr[i] < 0) i++;

    min = arr[i];
    while (i < size)
        if (arr[i++] > 0 && min > arr[i-1])
            min = arr[i-1];

    return min;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];
    
    cout << "Smallest non-negative element: " << minPositive(arr, size) << endl;

    return 0;
}