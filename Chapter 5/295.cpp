#include <iostream>
using namespace std;

void printIncreasingSubArray (int * arr, int size)
{
    string line (size * 2, '-');

    for (int i = 0; i < size; i++)
    {
        if (i < size - 1 && arr[i] < arr[i + 1])
            cout << arr[i] << " ";
        else
            cout << arr[i] << endl
                 << line   << endl;
    }
}

int main ()
{
    cout << "Size: ";
    int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Increasing subarrays: " << endl;
    printIncreasingSubArray (arr, size);

    return 0;
}