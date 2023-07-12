#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

// int countUnique (int * arr, unsigned int size)
// {
//     unordered_set<int> unique;
//     for (unsigned int i = 0; i < size; i++) 
//         unique.insert(arr[i]);
//     return unique.size();
// }

int countUnique (int * arr, unsigned int size)
{
    sort (arr, arr + size);
    int count = 1;
    for (unsigned int i = 1; i < size; i++)
        if (arr[i - 1] != arr[i])
            count++;
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

    cout << "Number of unique elements: " << countUnique (arr, size) << endl;

    return 0;
}