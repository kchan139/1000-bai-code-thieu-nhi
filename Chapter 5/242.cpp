#include <iostream>
using namespace std;

bool existEven (int * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++)
        if (!(arr[i] & 1)) return true;
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

    cout << "Exist an even element? ";
    (existEven (arr, size)) ? cout << "YES" : cout << "NO";
    cout << endl;

    return 0;
}