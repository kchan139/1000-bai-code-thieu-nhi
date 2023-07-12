#include <iostream>
using namespace std;

int countOppositePair (int * arr, unsigned int size)
{
    int count = 0;
    for (unsigned int i = 0; i < size - 1; i++)
        if (arr[i] * arr[i + 1] < 0)
            count++;
    return count;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Counted: " << countOppositePair (arr, size) << endl;

    return 0;
}