#include <iostream>
using namespace std;

int maxIdx (double * arr, unsigned int size)
{
    unsigned maxi = 0;
    for (unsigned int i = 1; i < size; i++)
        if (arr[maxi] < arr[i])
            maxi = i;
    return maxi;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    unsigned int maxIndex = maxIdx (arr, size);
    for (unsigned int i = 0; i < size; i++)
        if (arr[i] == arr[maxIndex])
            cout << i << " ";
    cout << endl;

    return 0;
}