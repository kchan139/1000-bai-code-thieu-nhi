#include <iostream>
using namespace std;

void printSubArray (double * arr, int size)
{
    double max = INT32_MIN, sum = 0;
    int begin = 0, maxBegin = 0, maxEnd = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        if (sum > max)
        {
            maxBegin = begin;
            maxEnd   = i;
            max      = sum;
        }
        if (sum < max)
        {
            sum = 0;
            begin = i + 1;
        }
    }

    for (int i = maxBegin; i <= maxEnd; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << "Largest sum: " << max << endl;
}

int main ()
{
    cout << "Size: ";
    int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << endl;
    cout << "Positive subarray with largest sum: " << endl; 
    printSubArray (arr, size);

    return 0;
}