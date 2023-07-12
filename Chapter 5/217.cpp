#include <iostream>
using namespace std;

int countDivisible (int * arr, unsigned int size, int n)
{
    int count = 0;
    for (unsigned int i = 0; i < size; i++)
        if (!(arr[i] % n)) count++;
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

    cout << "Number of elements divisible by 7: " << countDivisible (arr, size, 7) << endl;

    return 0;
}