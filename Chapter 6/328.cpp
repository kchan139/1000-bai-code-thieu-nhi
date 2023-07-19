#include <iostream>
#include <cmath>
using namespace std;

double geometricMeanPositive (double ** matrix, int row, int col)
{
    double prod = 1;
    int count = 0;
    
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            if (matrix[r][c] > 0)
            {
                prod *= matrix[r][c];
                count++;
            }
        }
    }
    return (count)? pow (prod, 1.0 / count) : count;
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
    cout << "Geometric mean of positive entries: " << geometricMeanPositive (matrix, row, col) << endl; 

    for (int r = 0; r < row; r++)
        delete[] matrix[r];
    delete[] matrix;

    return 0;
}