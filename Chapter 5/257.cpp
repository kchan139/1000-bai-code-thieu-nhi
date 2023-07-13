#include <iostream>
using namespace std;

void bubbSort (double * arr, unsigned int size)
{
    for (unsigned int i = 1; i < size - 2; i += 2)
        for (unsigned int j = i + 2; j < size; j += 2)
            if (arr[i] > arr[j]) swap (arr[i], arr[j]);
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

    cout << "Unsorted: " << endl;
    printArr (arr, size);

    cout << "Sorted at odd index: " << endl;
    bubbSort (arr, size);
    printArr (arr, size);

    return 0;
}