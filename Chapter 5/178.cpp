#include <iostream>
using namespace std;

void listInRange (int * arr, unsigned int size, int x, int y)
{
    for (unsigned int i = 0; i < size; i++)
        if (arr[i] >= x && arr[i] <= y)
            cout << arr[i] << " ";
    cout << endl;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Range [x, y]: ";
    int x, y; cin >> x >> y;

    listInRange (arr, size, x, y);

    return 0;
}