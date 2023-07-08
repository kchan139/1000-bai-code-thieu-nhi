#include <iostream>
using namespace std;

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];
    
    cout << "Indexes of negative elements: ";
    for (unsigned int i = 0; i < size; i++)
        if (arr[i] < 0)
            cout << i << " ";
    cout << endl;

    return 0;
}