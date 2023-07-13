#include <iostream>
#include <unordered_map>
using namespace std;

void listMostFrequentElements (int * arr, unsigned int size)
{
    unordered_map <int, int> freq;
    for (unsigned int i = 0; i < size; i++)
        freq[arr[i]]++;

    int maxFreq = 0;
    for (auto pair : freq)
        if (maxFreq < pair.second)
            maxFreq = pair.second;
    
    for (auto pair : freq)
        if (pair.second == maxFreq)
            cout << pair.first << " ";
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
    
    cout << "Most frequent elements: " << endl;
    listMostFrequentElements (arr, size);

    return 0;
}