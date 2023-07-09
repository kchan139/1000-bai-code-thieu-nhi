#include <iostream>
#include <cmath>
using namespace std;

bool isSquare (int n)
{
    int sqrt_n = sqrt(n);
    return sqrt_n * sqrt_n == n;
}

int firstSqr (int * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++)
        if (isSquare(arr[i]))
            return arr[i];
    return 0;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "First square number: " << firstSqr (arr, size) << endl;

    return 0;
}