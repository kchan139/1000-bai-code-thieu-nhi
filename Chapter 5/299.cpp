#include <iostream>
using namespace std;

void findIncreasingSubsq (double * arr, int size)
{
    string line (2 * size, '-');

    for (int i = 0; i < size; i++)
    {
        if (i < size - 1 && arr[i] < arr[i + 1])
            cout << arr[i] << " ";
        else
            cout << arr[i] << endl
                 << line   << endl;
    }
}

int main ()
{
    cout << "Size: ";
    int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    
    cout << "Increasing subsequence with len > 1: " << endl;
    findIncreasingSubsq (arr, size);

    return 0;
}