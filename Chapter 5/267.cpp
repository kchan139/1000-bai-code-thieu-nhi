#include <iostream>
using namespace std;

int main ()
{
    cout << "Size: ";
    int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        for (int j = 0; j < i; j++)
            for (int k = j + 1; k < i + 1; k++)
                if (arr[j] > arr[k]) 
                    swap (arr[j], arr[k]);
    }

    cout << "Sorted: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}