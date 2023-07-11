#include <iostream>
using namespace std;

bool isFirstDigitEven (int n)
{
    while (n / 10) n /= 10;
    return !(n & 1);
}

void listFirstDigitEven (int * arr, unsigned int size)
{
    string result = "";
    for (unsigned int i = 0; i < size; i++)
        if (isFirstDigitEven(arr[i]))
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

    cout << "Elements with first digit even: ";
    listFirstDigitEven (arr, size);

    return 0;
}