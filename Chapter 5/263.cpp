#include <iostream>
#include <vector>
using namespace std;

void signSort (int * arr, unsigned int size)
{
    vector<int> pIdx, nIdx;

    for (unsigned int i = 0; i < size; i++)
        (arr[i] < 0)? nIdx.push_back(i) : pIdx.push_back(i);

    unsigned int eSize = pIdx.size(),
                 oSize = nIdx.size();
    
    for (unsigned int i = 0; i < eSize - 1; i++)
        for (unsigned int j = i + 1; j < eSize; j++)
            if (arr[pIdx[i]] > arr[pIdx[j]])
                swap (arr[pIdx[i]], arr[pIdx[j]]);

    for (unsigned int i = 0; i < oSize - 1; i++)
        for (unsigned int j = i + 1; j < oSize; j++)
            if (arr[nIdx[i]] < arr[nIdx[j]])
                swap (arr[nIdx[i]], arr[nIdx[j]]);
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

    cout << "Sign? sorted: " << endl;
    signSort (arr, size);
    print (arr, size);

    return 0;
}