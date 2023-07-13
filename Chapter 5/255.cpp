#include <iostream>
using namespace std;

void bubbleSort (double * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size - 1; i++)
        for (unsigned int j = i + 1; j < size; j++)
            if (arr[i] > arr[j]) swap (arr[i], arr[j]);
}

void insertionSort (double * arr, unsigned int size)
{
    for (int i = 1; i < size; i++)
    {
        double tmp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > tmp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = tmp;
    }
}

void printArr (double * arr, unsigned int size)
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

    cout << "Unsorted Array: " << endl;
    printArr (arr, size);

    cout << "Sorted Array: " << endl;
    insertionSort (arr, size);
    printArr (arr, size);

    return 0;
}