#include <iostream>
using namespace std;

int countSubArr (int * sub, int subsize, int * arr, int size)
{
    int count = 0;
    for (int i = 0; i <= size - subsize; i++)
    {
        bool isSub = true;
        for (int j = 0; isSub && j < subsize; j++)
            if (arr[i + j] != sub[j])
                isSub = false;
        
        if (isSub) count++;
    }
    return count;
}

int main ()
{
    cout << "Size of A: ";
    int asize; cin >> asize;

    cout << "A's elements: ";
    int arrA[asize];
    for (int i = 0; i < asize; i++)
        cin >> arrA[i];

    cout << "Size of B: ";
    int bsize; cin >> bsize;
    
    cout << "B's elements: ";
    int arrB[bsize];
    for (int i = 0; i < bsize; i++)
        cin >> arrB[i];

    cout << "Count A in B: " << countSubArr (arrA, asize, arrB, bsize);    
    cout << endl;

    return 0;
}