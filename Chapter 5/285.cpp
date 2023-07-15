#include <iostream>
#include <vector>
using namespace std;

void reversePositive (int * arr, int size)
{
    vector<int> posIdx;
    for (int i = 0; i < size; i++)
        if (arr[i] > 0) posIdx.push_back(i);

    int vtsize = posIdx.size();
    for (int i = 0; i < vtsize / 2; i++)
        swap (arr[posIdx[i]], arr[posIdx[vtsize - i - 1]]);
}

int main ()
{
    cout << "Size: ";
    int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "After: ";
    reversePositive (arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}