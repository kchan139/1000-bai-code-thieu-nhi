#include <iostream>
using namespace std;

int main ()
{
    cout << "Array size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    double max = arr[0];
    for (unsigned int i = 1; i < size; i++)
        if (max < arr[i])
            max = arr[i];
    cout << "Max: " << max << endl;
    
    return 0;
}