#include <iostream>
using namespace std;

double sum (double * arr, unsigned int size)
{
    double sum = 0;
    for (int i = 1; i < size - 1; i++)
        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
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

    cout << "Sum of all local max: " << sum (arr, size) << endl;

    return 0;
}