#include <iostream>
using namespace std;

double smallestNegative (double * arr, unsigned int size)
{
    double smallest = 0;
    for (unsigned int i = 0; i < size; i++)
        if (arr[i] < 0)
            if (!smallest || smallest > arr[i])
                smallest = arr[i];
    return smallest;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];
    
    cout << "Most negative: " << smallestNegative (arr, size) << endl;

    return 0;
}