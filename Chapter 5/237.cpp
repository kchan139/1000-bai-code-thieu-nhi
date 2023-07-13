#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int findMostFrequent (int * arr, unsigned int size)
{
    unordered_map <int, int> freq;
    for (unsigned int i = 0; i < size; i++)
        freq[arr[i]]++;
    
    int result = 0, maxFreq = 0;
    for (auto pair : freq)
    {
        if (maxFreq < pair.second)
        {
            maxFreq = pair.second;
            result  = pair.first;
        }
    }
    return result;
}

int main ()
{
    cout << "Size: ";
    unsigned int size; cin >> size;

    cout << "A's elements: ";
    int arr[size];
    for (unsigned int i = 0; i < size; i++)   
        cin >> arr[i];

    cout << "Most frequent element: " << findMostFrequent (arr, size) << endl;

    return 0;
}