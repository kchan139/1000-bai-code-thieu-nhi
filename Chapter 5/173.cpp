#include <iostream>
using namespace std;

void countDigits (int * arr, unsigned int size, int * digits)
{
    for (unsigned int i = 0; i < size; i++)
    {
        int num = arr[i];
        while (num)
        {
            digits[num % 10]++;
            num /= 10;
        }
    }
}

int findMinIdx (int * digits)
{
    short mini = 0, size = 10;
    while (mini < size && !digits[mini])
        mini++;

    for (unsigned short i = 0; i < size; i++)
        if (digits[i] && digits[mini] > digits[i])
            mini = i;
            
    return mini;
}

int main ()
{
    int digits[10] = {0};

    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++) 
        cin >> arr[i];

    countDigits (arr, size, digits);
    cout << "Least frequent digit: " << findMinIdx(digits) << endl;

    return 0;
}