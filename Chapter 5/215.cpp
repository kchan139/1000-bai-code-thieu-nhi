#include <iostream>
#include <cmath>
using namespace std;

double averageDistance (double * arr, unsigned int size)
{
    double sum = 0;
    for (unsigned int i = 0; i < size - 1; i++) 
        sum += abs(arr[i] - arr[i + 1]);
    return sum / (size - 1);
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Average distance: " << averageDistance (arr, size) << endl;
}