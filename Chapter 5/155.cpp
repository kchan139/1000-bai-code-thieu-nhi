#include <iostream>
#include <cmath>
using namespace std;

int findFarthestIdx (double * arr, unsigned int size, double x)
{
    int farthest = 0;
    for (unsigned int i = 1; i < size; i++)
        if (abs(arr[farthest] - x) < abs(arr[i] - x))
            farthest = i;
    return farthest;
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
    
    cout << "Farthest value away from X: " << arr[findFarthestIdx(arr, size, x)] << endl;

    return 0;
}