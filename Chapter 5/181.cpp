#include <iostream>
using namespace std;

void listElements (int * arr, unsigned int size)
{
    string result = "";
    for (unsigned int i = 0; i < size; i++)
    {
        if (!(arr[i] & 1))
        {
            if (!i && !(arr[i + 1] & 1))
                result += to_string(arr[i]) + " ";
            else if (i == size - 1 && !(arr[i - 1] & 1))
                result += to_string(arr[i]) + " ";
            else if (i && i < size - 1 && !(arr[i - 1] & 1 && arr[i + 1] & 1))
                result += to_string(arr[i]) + " ";
        }
    }
    (result.length())? 
        cout << result << endl : cout << "Not found" << endl;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    listElements (arr, size);

    return 0;
}