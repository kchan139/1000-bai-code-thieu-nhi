#include <iostream>
using namespace std;

bool isPrime (int n)
{
    if (n < 2) return false;
    for (unsigned int i = 2; i*i < n; i++)
        if (!(n % i)) return false;
    return true;
}

void listPrime (int * arr, unsigned int size)
{
    string result = "";
    for (unsigned int i = 0; i < size; i++)
        if (isPrime(arr[i]))
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

    listPrime(arr, size);

    return 0;
}