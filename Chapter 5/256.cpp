#include <iostream>
using namespace std;

void selectionSort (int * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size - 1; i++)
    {
        int max = i;
        for (unsigned int j = i + 1; j < size; j++)
            if (arr[max] < arr[j])
                max = j;
        swap (arr[i], arr[max]);
    }
}

void printArr (int * arr, unsigned int size)
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
    int arr[size];
    for (unsigned int i = 0; i < size; i++)   
        cin >> arr[i];

    cout << "Unsorted: " << endl;
    printArr (arr, size);

    cout << "Sorted: " << endl;
    selectionSort (arr, size);
    printArr (arr, size);

    return 0;
}