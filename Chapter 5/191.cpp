#include <iostream>
using namespace std;

void listLocalMaxValue (double * arr, unsigned int size)
{
    bool found = false;
    for (unsigned int i = 1; i < size - 1; i++)
        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
        {
            cout << arr[i] << " ";
            found = true;
        }
    (found)? cout << endl : cout << "Not found" << endl;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Local max value: ";
    listLocalMaxValue (arr, size);

    return 0;
}