#include <iostream>
using namespace std;

int countIncreasingSubsq (double * arr, int size)
{
    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j - 1] < arr[j])
                count++;
            else break;
        }
    }
    return count;
}

int main ()
{
    cout << "Size: ";
    int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    
    cout << "Number of increasing subsequence with len > 1: " << countIncreasingSubsq (arr, size) << endl;

    return 0;
}