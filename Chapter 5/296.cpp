#include <iostream>
#include <algorithm>
using namespace std;

void printIncreasingSubArray (int * arr, int size)
{
    string line (size * 2, '-');
    int max = *max_element (arr, arr + size);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == max)
        {
            int lower = i, upper = i;
            while (lower > 0 && arr[lower - 1] < arr[lower])
                lower--;
            while (upper < size - 1 && arr[upper] < arr[upper + 1])
                upper++;

            for (int j = lower; j <= upper; j++)
                cout << arr[j] << " ";
            cout << endl << line << endl;
        }
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

    cout << "Increasing subarrays containing the largest element: " << endl;
    printIncreasingSubArray (arr, size);

    return 0;
}