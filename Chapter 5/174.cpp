#include <iostream>
#include <algorithm>
using namespace std;

void listAll (double * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size - 1; i++)
        for (unsigned int j = i + 1; j < size; j++)
            cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    sort (arr, arr + size);
    listAll (arr, size);

    return 0;
}