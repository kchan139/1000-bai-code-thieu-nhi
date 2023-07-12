#include <iostream>
using namespace std;

int countFrequency (double * arr, unsigned int size, double value)
{
    int count = 0;
    for (unsigned int i = 0; i < size; i++)
        if (arr[i] == value) count++;
    return count;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "X: ";
    double x; cin >> x;

    cout << x << " frequency in the array: " << countFrequency (arr, size, x) << endl;

    return 0;
}