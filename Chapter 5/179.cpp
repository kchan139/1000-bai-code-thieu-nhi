#include <iostream>
#include <cmath>
using namespace std;

void listSmallerThanNextAbs (int * arr, unsigned int size)
{
    string result = "";
    for (unsigned int i = 0; i < size - 1; i++)
        if (arr[i] < abs(arr[i + 1]))
            result += to_string(arr[i]) + " ";

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
    
    listSmallerThanNextAbs (arr, size);

    return 0;
}