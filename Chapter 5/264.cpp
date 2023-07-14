#include <iostream>
using namespace std;

void merge (int * arr1, unsigned int size1, int * arr2, unsigned int size2)
{
    int mergedArr[size1 + size2];
    unsigned int i = 0, j = 0, k = 0;
    
    while (i < size1 && j < size2)
    {
        if (arr1[i] <= arr2[j])
            mergedArr[k++] = arr1[i++];
        else
            mergedArr[k++] = arr2[j++];
    }

    while (i < size1)
        mergedArr[k++] = arr1[i++];
    while (j < size2)
        mergedArr[k++] = arr2[j++];

    for (unsigned int i = 0; i < size1 + size2; i++)
        cout << mergedArr[i] << " ";
    cout << endl;
}

void print (int * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main ()
{
    cout << "Size of A: ";
    unsigned int size1; cin >> size1;

    cout << "A's elements (must be sorted): ";
    int arr1[size1];
    for (unsigned int i = 0; i < size1; i++)
        cin >> arr1[i];

    cout << "Size of B: ";
    unsigned int size2; cin >> size2;

    cout << "B's elements (must be sorted): ";
    int arr2[size2];
    for (unsigned int i = 0; i < size2; i++)
        cin >> arr2[i];

    cout << "Merged: ";
    merge (arr1, size1, arr2, size2);

    return 0;
}