#include <iostream>
using namespace std;



int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    sort (arr, arr + size);
    double distance[size - 1];
    for (unsigned int i = 0; i < size - 1; i++)
        distance[i] = arr[i + 1] - arr[i];

    unsigned int min = 0;
    for (unsigned int i = 1; i < size - 1; i++)
        if (distance[min] > distance[i])
            min = i;
    
    cout << "Minimum distance pair: (" << arr[min] << ", " << arr[min + 1] << ")" << endl; 

    return 0;
}