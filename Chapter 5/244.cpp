#include <iostream>
using namespace std;

bool isPerfect (int n)
{
    int sum = 0;
    for (int i = 1; i*i <= n; i++)
    {
        if (n % i == i) 
            sum += i;
        else sum += i + n / i;
    }
    return sum == n;
}

bool existNoPerfectNumberLargerThan256 (int * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++)
        if (arr[i] > 256 && isPerfect(arr[i]))
            return false;
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

    cout << "Exist no perfect number larger than 256? ";
    (existNoPerfectNumberLargerThan256 (arr, size)) ? cout << "YES" : cout << "NO";
    cout << endl;

    return 0;
}