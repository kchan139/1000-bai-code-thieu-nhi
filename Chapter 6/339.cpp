#include <iostream>
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
    return sum == n;
}

int countPerfect (int ** matrix, int row, int col)
{
    int count = 0;
    for (int r = 0; r < row; r++)
        for (int c = 0; c < col; c++)
            count += (isPerfect(matrix[r][c]));
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
    cout << "Number of perfect numbers: " << countPerfect (matrix, row, col) << endl;

    for (int r = 0; r < row; r++)
        delete[] matrix[r];
    delete[] matrix;

    return 0;
}