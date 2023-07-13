#include <iostream>
using namespace std;

bool existPrime (int * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++)
    {
        bool prime = true;
        if (arr[i] < 2) continue;

        for (unsigned int j = 2; prime && j*j <= arr[i]; j++)
            if (!(arr[i] % j)) prime = false;
            
        if (prime) return true;
    }
    return false;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)   
        cin >> arr[i];

    cout << "Exist a prime number? ";
    (existPrime (arr, size)) ? cout << "YES" : cout << "NO";
    cout << endl;

    return 0;
}