#include <iostream>
using namespace std;

bool isFirstDigitOdd (int n)
{
    while (n / 10) n /= 10;
    return n & 1;
}

void listFirstDigitOdd (int * arr, unsigned int size)
{
    string result = "";
    for (unsigned int i = 0; i < size; i++)
        if (isFirstDigitOdd(arr[i]))
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

    cout << "Elements with first digit odd: ";
    listFirstDigitOdd (arr, size);

    return 0;
}