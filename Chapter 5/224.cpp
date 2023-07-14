#include <iostream>
using namespace std;

bool isPerfect (int n)
{
    int sum = 1;
    for (int i = 2; i*i <= n; i++)
    {
        if (!(n % i))
        {
            if (n % i == i)
                sum += i;
            else sum += i + n / i;
        }
    }
    return (sum == n && n != 1);
}

int countPerfect (int * arr, unsigned int size)
{
    int count = 0;
    for (unsigned int i = 0; i < size; i++)
        if (isPerfect (arr[i])) count++;
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

    cout << "Number of perfect numbers: " << countPerfect (arr, size) << endl;

    return 0;
}