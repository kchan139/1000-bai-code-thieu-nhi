#include <iostream>
using namespace std;

void rowSum (double ** matrix, int row, int col)
{
    double sum = 0;
    string line (20, '-');
    cout << line << endl << "Sum of positive elements: " << endl;

    for (int r = 0; r < row; r++)
    {
        sum = 0;
        for (int c = 0; c < col; c++)
            if (matrix[r][c] > 0) 
                sum += matrix[r][c];
        cout << "Row " << r + 1 << " : " << sum << endl;
    }
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
    rowSum (matrix, row, col);

    for (int r = 0; r < row; r++)
        delete[] matrix[r];
    delete[] matrix;

    return 0;
}