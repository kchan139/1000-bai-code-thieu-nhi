#include <iostream>
using namespace std;

bool isPrime (int n)
{
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++)
        if (!(n % i)) return false;
    return true;
}

int countPrime (int ** matrix, int row, int col)
{
    int count = 0;
    for (int r = 0; r < row; r++)
        for (int c = 0; c < col; c++)
            count += isPrime(matrix[r][c]);
    return count;
}

void takeInputMatrix (int ** matrix, int row, int col)
{
    cout << "Entries: " << endl;
    for (int r = 0; r < row; r++)
        for (int c = 0; c < col; c++)
            cin >> matrix[r][c];
}

int main ()
{
    cout << "Dimension (row, column): ";
    int row, col; cin >> row >> col;

    int ** matrix = new int * [row];
    for (int r = 0; r < row; r++)
        matrix[r] = new int [col];

    takeInputMatrix (matrix, row, col);
    cout << "Number of prime numbers: " << countPrime (matrix, row, col) << endl;

    for (int r = 0; r < row; r++)
        delete[] matrix[r];
    delete[] matrix;

    return 0;
}