#include <iostream>
using namespace std;

bool isAllDigitsOdd (int n)
{
    while (n)
    {
        if (!(n & 1)) return false;
        n /= 10;
    }
    return true;
}

int largestAllDigitsOdd (int * arr, unsigned int size)
{
    int max = 0;
    for (unsigned int i = 0; i < size; i++)
        if (isAllDigitsOdd(arr[i]) && max < arr[i])
            max = arr[i];
    return max;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Largest element with all digits odd: " << largestAllDigitsOdd (arr, size) << endl;

    return 0;
}