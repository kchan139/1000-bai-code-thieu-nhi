#include <iostream>
using namespace std;

int maxPositiveIdx (double * arr, unsigned int size)
{
    int idx = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0 && idx == -1)
            idx = i;
        else if (arr[idx] < arr[i])
            idx = i;
    }
    return idx;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    int maxPosIdx = maxPositiveIdx (arr, size);
    if (maxPosIdx > -1)
    {
        for (unsigned int i = 0; i < size; i++)
            if (arr[i] == arr[maxPosIdx])
                cout << i << " ";
    }
    else cout << "Not found";

    cout << endl;

    return 0;
}