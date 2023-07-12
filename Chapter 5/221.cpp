#include <iostream>
#include <cmath>
using namespace std;

short correlation (int * arr, unsigned int size)
{
    short result = 0;
    for (unsigned int i = 0; i < size; i++)
        (arr[i] & 1) ? result-- : result++;
    
    return (result)? result / abs(result) : result;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "The correlation between the number of even numbers and the number of odd numbers: "
         << correlation (arr, size) << endl;

    return 0;
}