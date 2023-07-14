#include <iostream>
#include <vector>
using namespace std;

void evenoddSort (int * arr, unsigned int size)
{
    vector<int> eIdx, oIdx;

    for (unsigned int i = 0; i < size; i++)
        (arr[i] & 1)? oIdx.push_back(i) : eIdx.push_back(i);

    unsigned int eSize = eIdx.size(),
                 oSize = oIdx.size();
    
    for (unsigned int i = 0; i < eSize - 1; i++)
        for (unsigned int j = i + 1; j < eSize; j++)
            if (arr[eIdx[i]] > arr[eIdx[j]])
                swap (arr[eIdx[i]], arr[eIdx[j]]);

    for (unsigned int i = 0; i < oSize - 1; i++)
        for (unsigned int j = i + 1; j < oSize; j++)
            if (arr[oIdx[i]] > arr[oIdx[j]])
                swap (arr[oIdx[i]], arr[oIdx[j]]);
}

void print (int * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++) 
        cout << arr[i] << " ";
    cout << endl;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Unsorted: " << endl;
    print (arr, size);

    cout << "even-odd? sorted: " << endl;
    evenoddSort (arr, size);
    print (arr, size);

    return 0;
}