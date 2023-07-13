#include <iostream>
#include <unordered_set>
using namespace std;

void listAppearInOne (double * arr_a, unsigned int size_a, double * arr_b, unsigned int size_b)
{
    unordered_set<double> setA (arr_a, arr_a + size_a);
    unordered_set<double> setB (arr_b, arr_b + size_b);

    cout << "Elements in A that's not in B: ";
    for (double element_a : setA)
        if (setB.find(element_a) == setB.end())
            cout << element_a << " ";
    cout << endl;

    cout << "Elements in B that's not in A: ";
    for (double element_b : setB)
        if (setA.find(element_b) == setA.end())
            cout << element_b << " ";

    cout << endl;
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

    listAppearInOne (arr_a, size_a, arr_b, size_b);

    return 0;
}