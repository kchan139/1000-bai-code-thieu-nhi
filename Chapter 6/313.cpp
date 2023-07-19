#include <iostream>
#include <iomanip>
using namespace std;

void printMatrix (int ** matrix, int row, int col)
{
    cout << "Your matrix: " << endl;
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
            cout << setw(4) << matrix[r][c];
        cout << endl << endl;
    }
}

void takeInputMatrix (int ** matrix, int row, int col)
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

    int ** matrix = new int * [row];
    for (int r = 0; r < row; r++)
        matrix[r] = new int [col];

    takeInputMatrix (matrix, row, col);
    printMatrix (matrix, row, col);

    for (int r = 0; r < row; r++)
        delete[] matrix[r];
    delete[] matrix;    

    return 0;
}