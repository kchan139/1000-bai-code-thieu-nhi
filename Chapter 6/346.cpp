#include <iostream>
using namespace std;

int countQueens (double ** matrix, int row, int col)
{
    int count = 0;
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            bool isQueen = true;
            for (int i = 0; i < row && isQueen; i++)
                if (i != r && matrix[i][c] >= matrix[r][c])
                    isQueen = false;
            for (int i = 0; i < col && isQueen; i++)
                if (i != c && matrix[r][i] >= matrix[r][c])
                    isQueen = false;
            for (int i = -min(r, c); i < min(row - r, col - c) && isQueen; i++)
                if (i != 0 && matrix[r + i][c + i] >= matrix[r][c])
                    isQueen = false;
            for (int i = -min(r, col - c - 1); i < min(row - r, c + 1) && isQueen; i++)
                if (i != 0 && matrix[r + i][c - i] >= matrix[r][c])
                    isQueen = false;
            if (isQueen)
                count++;
        }
    }
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
    cout << "Number of queens: "  << countQueens (matrix, row, col) << endl;
    for (int r = 0; r < row; r++)
        delete[] matrix[r];
    delete[] matrix;

    return 0;
}
