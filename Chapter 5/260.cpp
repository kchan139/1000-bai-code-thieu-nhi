#include <iostream>
#include <unordered_map>
using namespace std;

bool isPermutation (int * arr_a, unsigned int size_a, int * arr_b, unsigned int size_b)
{
    if (size_a != size_b) return false;
    
    unordered_map<int, int> map;
    for (unsigned int i = 0; i < size_a; i++)
        map[arr_a[i]]++;

    for (unsigned int i = 0; i < size_b; i++)
    {
        if (!map[arr_b[i]]) return false;
        map[arr_b[i]]--;
    }    
    return true;
}

int main ()
{
    cout << "Size of A: ";
    unsigned int size_a; cin >> size_a;

    cout << "A's elements: ";
    int arr_a[size_a];
    for (unsigned int i = 0; i < size_a; i++)
        cin >> arr_a[i];

    cout << "Size of B: ";
    unsigned int size_b; cin >> size_b;

    cout << "B's elements: ";
    int arr_b[size_b];
    for (unsigned int i = 0; i < size_b; i++)
        cin >> arr_b[i];

    cout << "Is B a permutation of A? ";
    (isPermutation(arr_a, size_a, arr_b, size_b)) ?
        cout << "YES" << endl : cout << "NO" << endl; 

    return 0;
}