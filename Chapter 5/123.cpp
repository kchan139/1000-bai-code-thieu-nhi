#include <iostream>
using namespace std;

unsigned int minIndex (int * arr, unsigned int size)
{
    unsigned int minIndex = 0;
    int min = arr[minIndex];

    for (unsigned int i = 1; i < size; i++)
    {
        if (min > arr[i])
        {
            minIndex = i;
            min = arr[minIndex];
        }
    }
    return minIndex;
}

int main ()
{
    cout << "Array size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++) 
        cin >> arr[i];

    cout << "Min index: " << minIndex(arr, size) << endl;

    return 0;
}