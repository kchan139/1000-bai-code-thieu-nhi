#include <iostream>
#include <cmath>
using namespace std;

double findRange (double * arr, unsigned int size)
{
    double max = abs(arr[0]);
    for (unsigned int i = 1; i < size; i++)
        if (max < abs(arr[i]))
            max = abs(arr[i]);
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

    double x = findRange (arr, size);
    cout << "Range: [" << x << ", -" << x << "]" << endl;

    return 0;
}