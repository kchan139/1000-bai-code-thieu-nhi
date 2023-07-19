#include <iostream>
using namespace std;

void colEvenProd (int ** matrix, int row, int col)
{
    long product = 1;
    string line (20, '-');
    cout << line << endl << "Product of even numbers: " << endl;

    for (int c = 0; c < col; c++)
    {
        product = 1;
        for (int r = 0; r < row; r++)
            if (!(matrix[r][c] & 1))
                product *= matrix[r][c];
        cout << "Column " << c + 1 << " : " << product << endl;
    }
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
    colEvenProd (matrix, row, col);

    for (int r = 0; r < row; r++)
        delete[] matrix[r];
    delete[] matrix;

    return 0;
}