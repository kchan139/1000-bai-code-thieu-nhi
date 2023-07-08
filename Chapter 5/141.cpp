#include <iostream>
using namespace std;

int idxSmallesPositive (double * arr, unsigned int size)
{
    int idx = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            if (idx == -1) 
                idx = i;
            else if (arr[i] < arr[idx])
                idx = i;
        }
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
    
    cout << "Index of smallest non-negative element: "
         << idxSmallesPositive (arr, size) << endl;
    
    return 0;
}