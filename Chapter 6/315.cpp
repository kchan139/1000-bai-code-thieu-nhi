#include <iostream>
using namespace std;

double findMax (double ** matrix, int row, int col)
{
    double max = INT64_MIN;
    for (int r = 0; r < row; r++)
        for (int c = 0; c < col; c++)
            if (max < matrix[r][c])
                max = matrix[r][c];
    return max;
}

void takeInputMatrix (double ** matrix, int row, int col)
{
    cout << "Entries (row by row): " << endl;
    for (int r = 0; r < row; r++)
        for (int c = 0; c < col; c++)
            cin >> matrix[r][c];
}

int main ()
{
    cout << "Dimension (row, column): ";
    int row, col; cin >> row >> col;

    double ** matrix = new double * [row];
    for (int r = 0; r < row; r++)
        matrix[r] = new double [col];

    takeInputMatrix (matrix, row, col);
    cout << "Max value: " << findMax (matrix, row, col) << endl;

    for (int r = 0; r < row; r++)
        delete[] matrix[r];
    delete[] matrix;

    return 0;
}