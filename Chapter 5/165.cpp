#include <iostream>
using namespace std;

bool isFirstDigitOdd (int n)
{
    string digit = to_string(n);
    return ((digit[0] - '0') & 1);
}

int firstFDOdd (int * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++)
        if (isFirstDigitOdd(arr[i]))
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

    cout << "First number having the first digit odd: " 
         << firstFDOdd (arr, size) << endl;

    return 0;
}