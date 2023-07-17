#include <iostream>
using namespace std;

void printLongestPositiveSubArray (double * arr, int size)
{
    int begin = 0, end  = 0, 
        maxB  = 0, maxE = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            end = i;
            if (end - begin > maxE - maxB)
            {
                maxB = begin;
                maxE = end;
            }
        }
        else 
        {
            begin = i + 1;
            end   = i + 1;
        }
    }

    for (int i = maxB; i <= maxE; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main ()
{
    cout << "Size: ";
    int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Longest positive subarray: " << endl; 
    printLongestPositiveSubArray (arr, size);

    return 0;
}