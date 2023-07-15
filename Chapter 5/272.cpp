#include <iostream>
#include <algorithm>
using namespace std;

int eraseMax (double * arr, int size)
{
    double max = *max_element(arr, arr + size);
    int i = 0, j = 0, count = 0;

    while (i < size && j < size)
    {
        while (arr[j] == max)
        {
            count++;
            j++;
        }
        if (j > size - 1) break;

        arr[i++] = arr[j++];
    }

    return count;
}

int main ()
{
    cout << "Size: ";
    int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Array after removing largest elements: "; 
    int count = eraseMax (arr, size);
    for (int i = 0; i < size - count; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}