#include <iostream>
using namespace std;

void listNegative (double * arr, unsigned int size)
{
    bool found = false;
    for (unsigned int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            cout << arr[i] << " ";
            found = true;
        }
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

    cout << "Negative elements: ";
    listNegative (arr, size);

    return 0;
}