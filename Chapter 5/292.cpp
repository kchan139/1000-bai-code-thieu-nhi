#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void toNearestInt (double * arr, int size)
{
    for (int i = 0; i < size; i++)
        arr[i] = round (arr[i]);
}

int main ()
{
    cout << "Size: ";
    int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "To nearest integer: ";
    toNearestInt (arr, size);
    for (int i = 0; i < size; i++)  
        cout << fixed << setprecision(1) << arr[i] << " ";
    cout << endl;

    return 0;
}