#include <iostream>
#include <algorithm>
using namespace std;

void swapMinMax (int * arr, int size)
{
    int min = *min_element (arr, arr + size);
    int max = *max_element (arr, arr + size);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == min) 
            arr[i] = max;
        else if (arr[i] == max) 
            arr[i] = min;
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

    cout << "Min Max swapped: ";
    swapMinMax (arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}