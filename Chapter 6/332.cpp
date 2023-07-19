#include <iostream>
using namespace std;

void columnOddSum (int ** matrix, int row, int col)
{
    string line (20, '-');
    cout << line << endl << "Sum of odd entries: " << endl;

    int sum = 0;
    for (int c = 0; c < col; c++)
    {
        sum = 0;
        for (int r = 0; r < row; r++)   
            sum += (matrix[r][c] & 1) * matrix[r][c];
        cout << "Column " << c + 1 << " : " << sum << endl;
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
    columnOddSum (matrix, row, col);

    for (int r = 0; r < row; r++)
        delete[] matrix[r];
    delete[] matrix;

    return 0;
}