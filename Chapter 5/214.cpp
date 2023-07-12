#include <iostream>
#include <cmath>
using namespace std;

double geometricMean (double * arr, unsigned int size)
{
    double product = 1;
    for (unsigned int i = 0; i < size; i++)
        product *= arr[i];
    
    return pow (product, 1.0 / size);
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Geometric mean: " << geometricMean (arr, size);

    return 0;
}