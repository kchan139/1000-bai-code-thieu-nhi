#include <iostream>
using namespace std;

double average (double * arr, unsigned int size)
{
    double sum = 0; 
    unsigned int count = 0;
    for (unsigned int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
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
    double arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Average value of positive numbers: " << average (arr, size) << endl;

    return 0;
}