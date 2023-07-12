#include <iostream>
using namespace std;

int countMax (int * arr, unsigned int size)
{
    int count = 1, max = arr[0];
    for (unsigned int i = 1; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            count = 1;
        }
        else if (max == arr[i])
            count++;
    }
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

    cout << "Max count: " << countMax (arr, size) << endl;   

    return 0;
}