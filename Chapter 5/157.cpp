#include <iostream>
using namespace std;

double findRange (double * arr, unsigned int size, bool lower)
{
    double result = arr[0];
    for (unsigned int i = 1; i < size; i++)
        if ((lower && arr[i] < result) || (!lower && arr[i] > result))
            result = arr[i];
    return result;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    double a = findRange (arr, size, true);
    double b = findRange (arr, size, false);

    cout << "Range: [" << a << ", " << b << "]" << endl;

    return 0;
}