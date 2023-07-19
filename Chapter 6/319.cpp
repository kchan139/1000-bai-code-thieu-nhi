#include <iostream>
#include <iomanip>
using namespace std;

void sortMatrix (double ** matrix, int row, int col)
{
    int ri, ci, rj, cj;
    int msize = row * col;

    for (int i = 0; i < msize - 1; i++)
    {
        for (int j = i + 1; j < msize; j++)
        {
            ri = i / col; ci = i % col;
            rj = j / col; cj = j % col;

            cout << "TEST: " << ri << " " << ci << " "
                             << rj << " " << cj << endl;

            if (matrix[ri][ci] > matrix[rj][cj])
                swap (matrix[ri][ci], matrix[rj][cj]);
        }
    }    
}

void takeInputMatrix (double ** matrix, int row, int col)
{
    cout << "Entries: " << endl;
    for (int r = 0; r < row; r++)
        for (int c = 0; c < col; c++)
            cin >> matrix[r][c];
}

void printMatrix (double ** matrix, int row, int col)
{
    cout << "MATRIX" << endl;
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
            cout << setprecision(2) << setw(6)
                 << fixed << matrix[r][c];
        cout << endl << endl;    
    }
}

int main ()
{
    cout << "Dimension (row, column): ";
    int row, col; cin >> row >> col;

    double ** matrix = new double * [row];
    for (int r = 0; r < row; r++)
        matrix[r] = new double [col];

    takeInputMatrix (matrix, row, col);
    printMatrix (matrix, row, col);

    cout << endl << "** SORT **" << endl;
    sortMatrix (matrix, row, col);
    printMatrix (matrix, row, col);

    for (int r = 0; r < row; r++) 
        delete[] matrix[r];
    delete[] matrix;

    return 0;
}