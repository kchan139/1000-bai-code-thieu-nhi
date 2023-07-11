#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++) 
        cin >> arr[i];

    sort (arr, arr + size);
    int distances[size - 1];
    for (unsigned int i = 0; i < size - 1; i++)
        distances[i] = arr[i + 1] - arr[i];

    int minDistance = *min_element(distances, distances + size - 1);
    cout << "Minimum distance pairs: " << endl;
    for (unsigned int i = 0; i < size - 1; i++)
        if (distances[i] == minDistance)
            cout << "(" << arr[i] << ", " << arr[i + 1] << ")" 
                 << endl;

    return 0;
}