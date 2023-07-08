#include <iostream>
using namespace std;

bool isPrime (int n)
{
    if (n < 2) return false;
    for (int i = 2; i < n; i++)
        if (!(n % i)) return false;
    return true;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    unsigned int count = 0;
    for (unsigned int i = 0; i < size; i++)
        if (arr[i] < 100)
            if (isPrime(arr[i]))
                count++;

    cout << "Prime numbers smaller than 100 counted: " << count << endl;

    return 0;
}