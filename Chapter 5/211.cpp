#include <iostream>
using namespace std;

bool isPrime (int n)
{
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++)
        if (!(n % i)) return false;
    return true;
}

double average (int * arr, unsigned int size)
{
    double sum = 0; 
    unsigned int count = 0;
    for (unsigned int i = 0; i < size; i++)
    {
        if (isPrime(arr[i]))
        {
            sum += arr[i];
            count++;
        }
    }
    return (count)? sum / count : count;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Average value of prime numbers: " << average (arr, size) << endl;

    return 0;
}