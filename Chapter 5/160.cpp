#include <iostream>
using namespace std;

double lastNegative (double * arr, unsigned int size) // < -1
{
    for (int i = size - 1; i >= 0; i--) 
        if (arr[i] < -1)
            return arr[i];
    return 0;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    

    return 0;
}