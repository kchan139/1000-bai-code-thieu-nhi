#include <iostream>
using namespace std;

double firstLarger(double * arr, unsigned int size, int value)
{
    for (unsigned int i = 0; i < size; i++)
        if (arr[i] > value)
            return arr[i];
    return 0;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];
    
    cout << "First element greater than 2003: " << firstLarger (arr, size, 2003) << endl;

    return 0;
}