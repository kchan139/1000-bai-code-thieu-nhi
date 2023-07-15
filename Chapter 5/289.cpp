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

    cout << "Even elements: ";
    for (int i = 0; i < size; i++)
        if (!(arr[i] & 1)) cout << arr[i] << " ";
    cout << endl;

    cout << "Odd elements: ";
    for (int i = 0; i < size; i++)
        if (arr[i] & 1) cout << arr[i] << " ";
    cout << endl;

    return 0;
}