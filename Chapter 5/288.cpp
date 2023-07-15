#include <iostream>
using namespace std;

int main ()
{
    const string thisIsDumbAsf[2] = { "YELLOW", "WHITE" };

    cout << "Size: ";
    int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Yes sir what ever you need: " << endl;
    for (int i = 0; i < size; i++)
        cout << thisIsDumbAsf[arr[i] & 1] << " ";
    cout << endl;

    return 0;
}