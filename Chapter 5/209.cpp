#include <iostream>
using namespace std;

bool isPalindrome (int n)
{
    string num = to_string (n);
    unsigned int len = num.length();

    for (unsigned int i = 0; i < len / 2; i++)
        if (num[i] != num[len - i - 1])
            return false;
    return true;
}

int sum (int * arr, unsigned int size)
{
    int sum = 0;
    for (unsigned int i = 0; i < size; i++)
        if (isPalindrome(arr[i])) 
            sum += arr[i];
    return sum;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Sum of all palindrome number: " << sum (arr, size) << endl;

    return 0;
}