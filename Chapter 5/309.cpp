#include <iostream>
using namespace std;

int main ()
{
    cout << "Size: ";
    int size; cin >> size;

    cout << "Elements: ";
    int arr[size], barr[size];
    int currIdx = 0;
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    
    for (int i = 0; i < size; i++)
    {
        if (!i)
            barr[currIdx++] = arr[i + 1];
        else if (i == size - 1)
            barr[currIdx++] = arr[i - 1];
        else 
            barr[currIdx++] = arr[i - 1] + arr[i + 1];
    }

    cout << "Generated array: ";
    for (int i = 0; i < currIdx; i++)
        cout << barr[i] << " ";
    cout << endl;

    return 0;
}