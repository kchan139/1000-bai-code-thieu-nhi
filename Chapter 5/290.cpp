#include <iostream>
#include <vector>
using namespace std;

void reverseEvenOdd (int * arr, int size)
{
    vector<int> evenIdx, oddIdx;
    for (int i = 0; i < size; i++)
        (arr[i] & 1) ? 
            oddIdx.push_back(i) : evenIdx.push_back(i);

    int esize = evenIdx.size(), 
        osize = oddIdx.size();

    for (int i = 0; i < esize / 2; i++)
        swap (arr[evenIdx[i]], arr[evenIdx[esize - i - 1]]);
        
    for (int i = 0; i < osize / 2; i++)
        swap (arr[oddIdx[i]], arr[oddIdx[osize - i - 1]]);
}

int main ()
{
    cout << "Size: ";
    int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Even and odd elements reversed while maintaining their relative positions: " << endl;
    reverseEvenOdd (arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}