#include <iostream>
using namespace std;

void sortArray (double * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size - 1; i++)
        for (unsigned int j = i + 1; j < size; j++)
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
}

void printArray (double * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];
    
    cout << "Unsorted array: " << endl;
    printArray(arr, size);

    cout << "Sorted array: " << endl;
    sortArray(arr, size);
    printArray(arr, size);

    return 0;
}