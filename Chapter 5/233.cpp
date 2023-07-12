#include <iostream>
#include <algorithm>
using namespace std;

void listFrequency (int * arr, unsigned int size)
{
    int count = 1;
    sort (arr, arr + size);
    for (unsigned int i = 1; i <= size; i++)
    {
        if (i == size || arr[i - 1] != arr[i])
        {
            cout << arr[i - 1] << ": " << count << endl;
            count = 1;
        }
        else count++;
    }
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    listFrequency (arr, size);

    return 0;
}