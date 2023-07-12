#include <iostream>
using namespace std;

int countEven (int * arr, unsigned int size)
{
    int count = 0;
    for (unsigned int i = 0; i < size; i++)
        if (!(arr[i] & 1)) count++;
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

    cout << "Number of even elements: " << countEven (arr, size) << endl;

    return 0;
}