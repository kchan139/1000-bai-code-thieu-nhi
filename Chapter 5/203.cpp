#include <iostream>
using namespace std;

bool isValid (int n)
{
    n /= 10; n %= 10;
    return n == 5;
}

int sum (int * arr, unsigned int size)
{
    int sum = 0;
    for (unsigned int i = 0; i < size; i++)
        if (isValid(arr[i])) sum += arr[i];
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

    cout << "Sum: " << sum (arr, size) << endl;

    return 0;
}