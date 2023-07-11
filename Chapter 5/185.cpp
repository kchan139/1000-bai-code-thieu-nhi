#include <iostream>
#include <cmath>
using namespace std;

bool isSquare (int n)
{
    int n_sqrt = sqrt (n);
    return n_sqrt * n_sqrt == n;
}

void listSquare (int * arr, unsigned int size)
{
    string result = "";
    for (unsigned int i = 0; i < size; i++)
        if (isSquare(arr[i]))
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

    listSquare(arr, size);

    return 0;
}