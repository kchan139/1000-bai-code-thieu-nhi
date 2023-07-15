#include <iostream>
using namespace std;

void rightShift (int * arr, int size, int step)
{
    step %= size;
    
    int tmpArr[size];
    for (int i = 0; i < size; i++)
        tmpArr[i] = arr[i];

    for (int i = 0; i < step; i++)
        arr[i] = tmpArr[size - step + i];

    for (int i = 0; i < size - step; i++)
        arr[step + i] = tmpArr[i];
}

int main ()
{
    cout << "Size: ";
    int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "step [0, " << size - 1 << "]: ";
    int step; cin >> step;

    cout << "After right shifting one element " << step << " times: ";
    rightShift (arr, size, step);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}