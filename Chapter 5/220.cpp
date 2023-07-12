#include <iostream>
using namespace std;

int countLastDigitFive (int * arr, unsigned int size)
{
    int count = 0;
    for (unsigned int i = 0; i < size; i++)
        if (arr[i] % 10 && !(arr[i] % 5))
            count++;
    return count;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Elements with 5 as the last digit: " << countLastDigitFive (arr, size) << endl;

    return 0;
}