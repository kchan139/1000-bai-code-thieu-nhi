#include <iostream>
using namespace std;

unsigned int findMinIdx (double * arr, unsigned int size)
{
    unsigned int minIdx = 0;
    int min = arr[minIdx];
    for (unsigned int i = 1; i < size; i++)
    {
        if (min > arr[i])
        {
            minIdx = i;
            min = arr[minIdx];
        }
    }
    return minIdx;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];
    
    cout << "Min index: " << findMinIdx(arr, size) << endl;

    return 0;
}