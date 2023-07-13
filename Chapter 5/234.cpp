#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int countAppearInOne (double * arr_a, unsigned int size_a, double * arr_b, unsigned int size_b)
{
    unordered_set<double> setA (arr_a, arr_a + size_a);
    unordered_set<double> setB (arr_b, arr_b + size_b);
    
    int count = 0;
    for (double element_a : setA)
        if (setB.find(element_a) == setB.end())
            count++;
    
    for (double element_b : setB)
        if (setA.find(element_b) == setB.end()) 
            count++;

    return count;
}

int main ()
{
    cout << "Size of A: ";
    unsigned int size_a; cin >> size_a;

    cout << "A's Elements: ";
    double arr_a[size_a];
    for (unsigned int i = 0; i < size_a; i++)
        cin >> arr_a[i];
    
    cout << "Size of B: ";
    unsigned int size_b; cin >> size_b;

    cout << "B's Elements: ";
    double arr_b[size_b];
    for (unsigned int i = 0; i < size_b; i++)
        cin >> arr_b[i];

    cout << "Number of elements that appear in only one of the two arrays: " <<
    countAppearInOne (arr_a, size_a, arr_b, size_b) << endl;

    return 0;
}