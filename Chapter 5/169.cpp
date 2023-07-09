#include <iostream>
using namespace std;

void bubbleSort (int * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size - 1; i++)
        for (unsigned int j = i + 1; j < size; j++)
            if (arr[i] > arr[j])
                swap (arr[i], arr[j]);
}

int largestEvenButSmallerThanAllOdd (int * arr, unsigned int size)
{
    bubbleSort (arr, size);
    
    unsigned int i = 0;
    while (i < size && !(arr[i + 1] & 1)) i++;

    return (!(arr[i] & 1))? arr[i] : 0;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Largest even element but smaller than all other odd elements: "
         << largestEvenButSmallerThanAllOdd (arr, size) << endl;

    return 0;
}