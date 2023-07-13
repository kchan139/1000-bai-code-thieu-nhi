#include <iostream>
using namespace std;

int countSubArray (int * subArr, unsigned int subSize, int * arr, unsigned int size)
{
    int count = 0;
    for (unsigned int i = 0; i < size - subSize; i++)
    {
        bool found = true;
        for (unsigned int j = 0; j < subSize && found; j++)
            if (subArr[j] != arr[i + j])
                found = false;
        if (found) count++;
    }
    return count;
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

    cout << "Number of times A showed up in B: " << countSubArray(arr_a, size_a, arr_b, size_b) << endl;

    return 0;
}