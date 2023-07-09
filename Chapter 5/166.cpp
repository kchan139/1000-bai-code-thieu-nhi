#include <iostream>
using namespace std;

bool isPowerOfTwo (int n)
{
    if (n < 1) return false;

    unsigned short count = 0;
    while (n)
    {
        if (count > 1) return false;
        if (n & 1) count++;
        n >>= 1;
    }
    return count == 1;
}

int firstPowerOfTwo (int * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++)
        if (isPowerOfTwo (arr[i]))
            return arr[i];
    return 0;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "First power of 2: " << firstPowerOfTwo (arr, size) << endl;    

    return 0;
}