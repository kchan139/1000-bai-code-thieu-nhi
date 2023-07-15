#include <iostream>
using namespace std;

void moveOddEven (int * arr, int size)
{
    int tmpArr[size];
    for (int i = 0; i < size; i++)
    {
        tmpArr[i] = arr[i];
        arr[i] = 0;
    }

    int i = 0, e = 0, o = size - 1;
    while (i < size && e < size && o >= 0)
    {
        int tmp = tmpArr[i++];
        if (tmp & 1)
            arr[o--] = tmp;
        else if (tmp && !(tmp & 1))
            arr[e++] = tmp;
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

    cout << "After moving: ";
    moveOddEven (arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}