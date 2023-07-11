#include <iostream>
#include <algorithm>
using namespace std;

void listElements(double *arr, unsigned int size) {
    bool found = false;
    for (unsigned int i = 0; i < size; i++)
    {
        for (unsigned int j = i + 1; j < size; j++) 
        {
            if (find(arr, arr + size, arr[i] + arr[j]) != arr + size)
            {
                cout << "("  << arr[i] + arr[j] 
                     << ", " << arr[i] 
                     << ", " << arr[j] << ")" 
                     << endl;
                found = true;
            }
        }
    }
    if (!found) cout << "Not found" << endl;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Desired triples: " << endl;
    listElements (arr, size);

    return 0;
}