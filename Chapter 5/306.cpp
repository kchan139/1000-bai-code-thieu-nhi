#include <iostream>
using namespace std;

void printSubArray (double * arr, int size)
{
    double mx = INT32_MIN, sum = arr[0];
    int begin = 0, maxBegin = 0, maxEnd = 0;

    for (int i = 1; i < size; i++)
    {
        sum = max (arr[i], sum + arr[i]);
        if (sum > mx)
        {
            mx = sum;
            maxEnd = i;
            maxBegin = begin;
        }
        if (sum == arr[i])
            begin = i;
    }

    for (int i = maxBegin; i <= maxEnd; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << "Largest sum: " << mx << endl;
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
    cout << "Subarray with largest sum: " << endl; 
    printSubArray (arr, size);

    return 0;
}