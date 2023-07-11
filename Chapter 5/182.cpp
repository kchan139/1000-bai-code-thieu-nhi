#include <iostream>
using namespace std;

void listElements (double * arr, unsigned int size)
{
    string result = "";
    for (unsigned int i = 0; i < size; i++)
    {
        if (!i && arr[i] * arr[i + 1] < 0)
            result += to_string(arr[i]) + " ";
        else if (i == size - 1 && arr[i - 1] * arr[i] < 0)
            result += to_string(arr[i]) + " ";
        else if (i && i < size - 1 && 
                (arr[i - 1] * arr[i] < 0 || arr[i] * arr[i + 1] < 0))
            result += to_string(arr[i]) + " ";
    }
    (result.length())? 
        cout << result << endl : cout << "Not found" << endl;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    listElements (arr, size);

    return 0;
}