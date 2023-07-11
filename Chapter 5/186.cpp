#include <iostream>
using namespace std;

void listElements (double * arr, unsigned int size)
{
    string result = "";
    unsigned int negativeIdx = 0;
    while (arr[negativeIdx] >= 0)
        negativeIdx++;

    if (negativeIdx < size) result += negativeIdx;

    for (unsigned int i = negativeIdx; i < size; i++)
        if (arr[i] == arr[negativeIdx])
            result += to_string(i) + " ";
    
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