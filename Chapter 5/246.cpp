#include <iostream>
using namespace std;

bool isSymmetric (int * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size / 2; i++)
        if (arr[i] != arr[size - i - 1])
            return false;
    return true;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)   
        cin >> arr[i];

    cout << "Symmetric? ";
    (isSymmetric (arr, size)) ? cout << "YES" : cout << "NO";
    cout << endl;

    return 0;
}