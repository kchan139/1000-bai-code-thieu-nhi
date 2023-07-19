#include <iostream>
using namespace std;

int sumNegative (int ** matrix, int row, int col)
{
    int sum = 0;
    for (int r = 0; r < row; r++)
        for (int c = 0; c < col; c++)
            if (matrix[r][c] & 1) 
                sum += matrix[r][c];
    return sum;
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
    cout << "Sum of all negative entries: " << sumNegative (matrix, row, col) << endl;

    for (int r = 0; r < row; r++)
        delete[] matrix[r];
    delete[] matrix;

    return 0;
}