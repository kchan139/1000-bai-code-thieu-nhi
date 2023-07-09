#include <iostream>
using namespace std;

double findInRange (double * arr, unsigned int size, double lower = INT64_MIN, double upper = INT64_MAX)
{
    for (unsigned int i = 0; i < size; i++)
        if (lower <= arr[i] && arr[i] <= upper)
            return arr[i];
    return lower;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Range [x, y]: ";
    double x, y; cin >> x >> y;

    cout << "First element in range [" << x << ", " << y << "]: "
         << findInRange (arr, size, x, y) << endl;

    return 0;
}