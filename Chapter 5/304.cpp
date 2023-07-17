#include <iostream>
using namespace std;

void printSubArray (double * arr, int size, double value)
{
    int begin = 0, end = 0, sum = 0;

    for (int i = 0; i < size - 1 && sum != value; i++)
    {
        begin = i; sum = arr[i];
        for (int j = i + 1; j < size && sum != value; j++)
        {
            sum += arr[j];
            if (sum == value)
                end = j;
        }
    }

    for (int i = begin; i <= end; i++)
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

    cout << "M: ";
    double m; cin >> m;

    cout << "Subarray with sum equals M: " << endl; 
    printSubArray (arr, size, m);

    return 0;
}