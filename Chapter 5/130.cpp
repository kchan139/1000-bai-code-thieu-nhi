#include <iostream>
using namespace std;

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[size];

    cout << "Array of real numbers: ";
    for (unsigned int i = 0; i < size; i++)
        cout << arr[i];
    cout << endl;

    return 0;
}