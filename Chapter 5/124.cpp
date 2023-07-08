#include <iostream>
using namespace std;

bool exist (int * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++)
        if (arr[i] < 2004)
            if (!(arr[i] & 1))
                return true;
    return false;
}

int main ()
{
    cout << "Array size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++) 
        cin >> arr[i];

    cout << "There is an even element smaller than 2004 ?" << endl;
    (exist(arr, size))? cout << "YES" : cout << "NO";
    cout << endl;

    return 0;
}