#include <iostream>
using namespace std;

void listNegative (double * arr, unsigned int size)
{
    string result = "";
    for (unsigned int i = 0; i < size; i++)
        if (arr[i] < 0)
            result += to_string(arr[i]) + " ";
            
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

    listNegative (arr, size);

    return 0;
}