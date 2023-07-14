#include <iostream>
#include <vector>
using namespace std;

void sortPositive (double * arr, unsigned int size)
{
    vector<int> posIdx;
    for (unsigned int i = 0; i < size; i++)
        if (arr[i] > 0) posIdx.push_back(i);

    unsigned int vtsize = posIdx.size();
    for (unsigned int i = 0; i < vtsize - 1; i++)
        for (unsigned int j = i + 1; j < vtsize; j++)
            if (arr[posIdx[i]] > arr[posIdx[j]])
                swap (arr[posIdx[i]], arr[posIdx[j]]);
}

void print (double * arr, unsigned int size)
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
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Unsorted: " << endl;
    print (arr, size);

    cout << "Positive number sorted: " << endl;
    sortPositive (arr, size);
    print (arr, size);

    return 0;
}