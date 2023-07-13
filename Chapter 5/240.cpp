#include <iostream>
using namespace std;

bool existZero (int * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++)
        if (!arr[i]) return true;
    return false;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)   
        cin >> arr[i];

    cout << "Is there a zero in the array? ";
    (existZero(arr, size)) ? cout << "YES" : cout << "NO";
    cout << endl;

    return 0;
}