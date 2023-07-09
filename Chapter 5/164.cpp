#include <iostream>
using namespace std;

bool isPalindrome (int n)
{
    if (!(n / 100)) return false;

    string digit = to_string (n);
    for (unsigned int i = 0, len = digit.length(); i < len/2; i++)    
        if (digit[i] != digit[len - i - 1])
            return false;

    return true;
}

int firstPalindrome (int * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++) 
        if (isPalindrome (arr[i]))
            return arr[i];
    return 0;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "First palindrome: " << firstPalindrome (arr, size) << endl;

    return 0;
}