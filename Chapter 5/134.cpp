#include <iostream>
using namespace std;

double findMax (double * arr, unsigned int size)
{
    double max = arr[0];
    for (unsigned int i = 1; i < size; i++)
        if (max < arr[i])
            max = arr[i];
    return max;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "MAX: " << findMax(arr, size) << endl;

    return 0;
}