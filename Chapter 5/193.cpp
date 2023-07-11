#include <iostream>
using namespace std;

bool isPowerofThree (int n)
{
    while (n / 3)
    {
        if (n % 3) return false;
        n /= 3;
    }
    return n == 1;
}

void listPowThree (int * arr, unsigned int size)
{
    bool found = false;
    for (unsigned int i = 0; i < size; i++)
        if (isPowerofThree(arr[i]))
        {
            cout << arr[i] << " ";
            found = true;
        }
        
    (found)? cout << endl : cout << "Not found" << endl;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Elements that is a power of 3: ";
    listPowThree (arr, size);

    return 0;
}