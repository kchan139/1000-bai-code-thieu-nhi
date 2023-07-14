#include <iostream>
using namespace std;

int main ()
{
    cout << "Size: ";
    int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    bool even[size];
    for (int i = 0; i < size; i++)
        even[i] = !(arr[i] & 1);

    cout << "B: ";
    for (int i = 0; i < size; i++)
        cout << even[i] << " ";
    cout << endl;

    return 0;
}