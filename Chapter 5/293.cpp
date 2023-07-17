#include <iostream>
using namespace std;

void printSubArrays (int * arr, int size)
{
    string line (size * 3, '-');
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            cout << "(" << ++count << "): ";
            for (int k = i; k <= j; k++)    
                cout << arr[k] << " ";
            cout << endl << line << endl;
        }
    }
}

int main ()
{
    cout << "Size: ";
    int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "All sub arrays: " << endl;
    printSubArrays (arr, size);

    return 0;
}