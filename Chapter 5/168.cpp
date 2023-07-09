#include <iostream>
using namespace std;

bool isPowerOfFive (int n)
{
    if (n < 1) return false;
    while (n > 1)
    {
        if (n % 5) return false;
        n /= 5;
    }
    return true;
}

int largestPowerOfFive (int * arr, unsigned int size)
{
    int max = 0;
    for (unsigned int i = 0; i < size; i++)
        if (max < arr[i] && isPowerOfFive(arr[i]))
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

    cout << "Largest power of 5: " << largestPowerOfFive (arr, size) << endl;

    return 0;
}