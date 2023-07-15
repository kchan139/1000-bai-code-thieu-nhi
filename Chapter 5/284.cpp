#include <iostream>
#include <vector>
using namespace std;

void reverseEven (int * arr, int size)
{
    vector<int> evenIdx;
    for (int i = 0; i < size; i++)
        if (!(arr[i] & 1)) evenIdx.push_back(i);

    int vtsize = evenIdx.size();
    for (int i = 0; i < vtsize / 2; i++)
        swap(arr[evenIdx[i]], arr[evenIdx[vtsize - i - 1]]);
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
    reverseEven (arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}