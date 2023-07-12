#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

// void listFrequency (int * arr, unsigned int size)
// {
//     unordered_map <int, int> freq;
//     for (unsigned int i = 0; i < size; i++)
//         freq[arr[i]]++;

//     for (auto pair : freq)
//         cout << pair.first << " frequency: " << pair.second << endl;
// }

void listFrequency (int * arr, unsigned int size)
{
    sort (arr, arr + size);
    int count = 1;
    for (unsigned int i = 1; i <= size; i++)
    {
        if (i == size || arr[i - 1] != arr[i])
        {
            cout << arr[i - 1] << ": " << count << endl;
            count = 1;
        }
        else count++;
    }
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "Elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)
        cin >> arr[i];

    listFrequency (arr, size);

    return 0;
}