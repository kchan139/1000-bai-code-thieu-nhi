#include <iostream>
using namespace std;

int idxOfSmallestNegative (double * arr, unsigned int size)
{
    int idx = -1;
    for (unsigned int i = 0; i < size; i++)
        if (arr[i] < 0)
            if (idx == -1 || arr[idx] > arr[i])
                idx = i;
    return idx;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Index of most negative number: " 
         << idxOfSmallestNegative (arr, size) << endl;

    return 0;
}