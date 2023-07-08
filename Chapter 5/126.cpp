#include <iostream>
using namespace std;

double negativeSum (double * arr, unsigned int size)
{
    double sum = 0;
    for (unsigned int i = 0; i < size; i++)
        if (arr[i] < 0)
            sum += arr[i];
    return sum;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Sum of all negative elements: " << negativeSum(arr, size) << endl;

    return 0;
}