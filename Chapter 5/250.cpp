#include <iostream>
using namespace std;

bool isArithmeticSequence (int * arr, unsigned int size)
{
    int difference = arr[1] - arr[0]; 
    for (unsigned int i = 1; i < size - 1; i++)
        if (arr[i + 1] - arr[i] != difference) return false;
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

    cout << "Arithmetic sequence? ";
    (isArithmeticSequence (arr, size)) ? 
        cout << "YES. Their common difference is: " << arr[1] - arr[0] :
        cout << "NO";
    cout << endl;

    return 0;
}