#include <iostream>
using namespace std;

bool isAllDigitsOdd (int n)
{
    while (n / 10)
    {
        if (!(n & 1))
            return false;
        n /= 10;
    }
    return n & 1;
}

void listAllDigitsOddElements (int * arr, unsigned int size)
{
    string result = "";
    for (unsigned int i = 0; i < size; i++)
        if (isAllDigitsOdd (arr[i]))
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

    cout << "Elements with all digits odd: ";
    listAllDigitsOddElements (arr, size); 

    return 0;
}