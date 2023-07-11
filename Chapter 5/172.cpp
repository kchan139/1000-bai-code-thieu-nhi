#include <iostream>
using namespace std;

int gcd (int a, int b)
{
    if (!b) return a;
    return gcd (b, a % b);
}

int lcm (int a, int b)
{
    return (a * b) / gcd (a, b);
}

int leastCommonMultiple (int * arr, unsigned int size)
{
    int result = arr[0];
    for (unsigned int i = 1; i < size; i++) 
        result = lcm (result, arr[i]);
    return result;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];
    
    cout << "Least common multiple: " << leastCommonMultiple (arr, size) << endl;

    return 0;
}