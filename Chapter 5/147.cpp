#include <iostream>
using namespace std;

double lastPositive (double * arr, unsigned int size)
{
    for (int i = size - 1; i >= 0; i--)
        if (arr[i] > 0) return arr[i];
    return -1;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Last positive number: " << lastPositive (arr, size) << endl;

    return 0;
}