#include <iostream>
using namespace std;

bool firstDigitOdd (int n)
{
    while (n / 10) n /= 10;
    return n & 1;
}

void listFirstDigitOdds (int * arr, unsigned int size)
{
    bool found = false;
    for (unsigned int i = 0; i < size; i++)
    {
        if (firstDigitOdd (arr[i]))
        {
            cout << arr[i] << " ";
            found = true;
        }        
    }
    (found)? cout << endl : cout << "Not found" << endl;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Elements having first digit odd: ";
    listFirstDigitOdds (arr, size);

    return 0;
}