#include <iostream>
using namespace std;

bool firstDigitOdd (int n)
{
    while (n / 10) n /= 10;
    return n & 1;
}

int sumFDO (int * arr, unsigned int size)
{
    int sum = 0;
    for (unsigned int i = 0; i < size; i++)
        if (firstDigitOdd(arr[i])) sum += arr[i];
    return sum;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Sum of elements having first digit odd: " << sumFDO (arr, size) << endl;

    return 0;
}