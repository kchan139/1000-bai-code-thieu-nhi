#include <iostream>
using namespace std;

int countLocalMax (double ** matrix, int row, int col)
{
    int count = 0;
    for (int r = 1; r < row - 1; r++)
        for (int c = 1; c < col - 1; c++)
            if (matrix[r][c] > matrix[r-1][c] && matrix[r][c] > matrix[r+1][c] &&
                matrix[r][c] > matrix[r][c-1] && matrix[r][c] > matrix[r][c+1])
                    count++;
    return count;
}

void takeInputMatrix (double ** matrix, int row, int col)
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

    double ** matrix = new double * [row];
    for (int r = 0; r < row; r++)
        matrix[r] = new double [col];

    takeInputMatrix (matrix, row, col);
    cout << "Number of local maxima: "  << countLocalMax (matrix, row, col) << endl;
    for (int r = 0; r < row; r++)
        delete[] matrix[r];
    delete[] matrix;

    return 0;
}