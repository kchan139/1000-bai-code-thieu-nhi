#include <iostream>
#include <cmath>
using namespace std;

double sum (double * arr, unsigned int size)
{
    double sum = 0;
    for (unsigned int i = 1; i < size; i++)
        if (arr[i] > abs(arr[i - 1])) 
            sum += arr[i];
    return sum;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Sum of elements that is larger than the absolute value of its previous: " << sum (arr, size) << endl;

    return 0;
}