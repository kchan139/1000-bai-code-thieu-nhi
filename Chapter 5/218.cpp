#include <iostream>
using namespace std;

bool isPalindrome (int n)
{
    string num = to_string(n);
    unsigned int len = num.length();

    for (unsigned int i = 0; i < len / 2; i++)
        if (num[i] != num[len - i - 1])
            return false;
    return true;
}

int countPalindrome (int * arr, unsigned int size)
{
    int count = 0;
    for (unsigned int i = 0; i < size; i++)
        if (isPalindrome (arr[i]))
            count++;
    return count;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Number of symmetric elements: " << countPalindrome (arr, size) << endl;

    return 0;
}