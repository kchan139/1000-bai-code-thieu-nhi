#include <iostream>
using namespace std;

unsigned int findMaxIdx (double * arr, unsigned int size)
{
    unsigned int idx = 0;
    for (unsigned int i = 1; i < size; i++)
        if (arr[idx] < arr[i])
            idx = i;
    return idx;
}

void listMaxIndexes (double * arr, unsigned int size)
{
    double maxElement = arr[findMaxIdx(arr, size)];
    for (unsigned int i = 0; i < size; i++)
        if (arr[i] == maxElement)
            cout << i << " ";
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
    
    cout << "Max indexes: ";
    listMaxIndexes (arr, size);

    return 0;
}