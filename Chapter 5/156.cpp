#include <iostream>
using namespace std;

int findClosestIdx (double * arr, unsigned int size, double x)
{
    int closest = 0;
    for (unsigned int i = 1; i < size; i++) 
        if (abs(arr[closest] - x) > abs(arr[i] - x))
            closest = i;
    return closest;
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

    cout << "Closest to x: " << arr[findClosestIdx(arr, size, x)] << endl;

    return 0;
}