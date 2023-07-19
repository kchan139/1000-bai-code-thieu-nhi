#include <iostream>
using namespace std;

double sumNegative (double ** matrix, int row, int col)
{
    double sum = 0;
    for (int r = 0; r < row; r++)
        for (int c = 0; c < row; c++)
            if (matrix[r][c] < 0)
                sum += matrix[r][c];
    return sum;
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
    cout << "Sum of negative elements: " << sumNegative (matrix, row, col) << endl;

    for (int r = 0; r < row; r++)
        delete[] matrix[r];
    delete[] matrix;   

    return 0;
}