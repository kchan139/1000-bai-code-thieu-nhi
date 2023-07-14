#include <iostream>
#include <vector>
using namespace std;

bool isPerfect (int n)
{
    int sum = 1;
    for (int i = 2; i*i <= n; i++)
    {
        if (!(n % i))
        {
            if (i*i != n)
                sum += i + n/i;
            else sum += i;
        }
    }
    return (sum == n && n != 1);
}

void sortPerfect (int * arr, unsigned int size)
{
    vector<int> perfectIndex;
    for (unsigned int i = 0; i < size; i++)
        if (isPerfect(arr[i]))
            perfectIndex.push_back(i);

    unsigned int vtsize = perfectIndex.size();

    for (unsigned int i = 0; i < vtsize - 1; i++)
        for (unsigned int j = i + 1; j < vtsize; j++)   
            if (arr[perfectIndex[i]] < arr[perfectIndex[j]])
                swap (arr[perfectIndex[i]], arr[perfectIndex[j]]);
}

void print (int * arr, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];
    
    cout << "Unsorted: " << endl;
    print (arr, size);

    cout << "Perfect number sorted: " << endl;
    sortPerfect (arr, size);
    print (arr, size);

    return 0;
}