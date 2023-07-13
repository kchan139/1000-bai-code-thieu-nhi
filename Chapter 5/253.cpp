#include <iostream>
#include <algorithm>
using namespace std;

bool isSubset (int * subArr, unsigned int subSize, int * arr, unsigned int size)
{
    for (unsigned int i = 0; i < subSize; i++)
        if (find(arr, arr + size, subArr[i]) == arr + size)
            return false;
    return true;
}

int main ()
{
    cout << "Size of A: ";
    unsigned int size_a; cin >> size_a;

    cout << "A's Elements: ";
    int arr_a[size_a];
    for (unsigned int i = 0; i < size_a; i++)
        cin >> arr_a[i];
    
    cout << "Size of B: ";
    unsigned int size_b; cin >> size_b;

    cout << "B's Elements: ";
    int arr_b[size_b];
    for (unsigned int i = 0; i < size_b; i++)
        cin >> arr_b[i];

    cout << "Is A a subset of B? ";
    (isSubset (arr_a, size_a, arr_b, size_b)) ? 
        cout << "YES" : cout << "NO";
    cout << endl;

    return 0;
}