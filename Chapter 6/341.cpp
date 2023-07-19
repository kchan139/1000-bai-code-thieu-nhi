#include <iostream>
using namespace std;

void countBoundaryPositive (double ** matrix, int row, int col)
{
    string line (20, '-');
    cout << line << endl << "Number of positive entries on the boundary: ";

    int count = 0;
    for (int r = 0; r < row; r++)
        for (int c = 0; c < col; c++)
            if (!(r && c) || r == row - 1 || c == col - 1)
                count += (matrix[r][c] > 0);
    cout << count << endl;
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
    countBoundaryPositive (matrix, row, col);

    for (int r = 0; r < row; r++)
        delete[] matrix[r];
    delete[] matrix;

    return 0;
}