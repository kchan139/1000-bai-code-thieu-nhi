#include <iostream>
using namespace std;

bool exist (int ** matrix, int row, int col, int value)
{
    for (int r = 0; r < row; r++)
        for (int c = 0; c < col; c++)
            if (matrix[r][c] & 1 && matrix[r][c] < value)
                return true;
    return false;
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
    cout << "Exist an even element < 2004? ";
    (exist (matrix, row, col, 2004))? cout << "YES" : cout << "NO";
    cout << endl;


    for (int r = 0; r < row; r++)
        delete[] matrix[r];
    delete[] matrix;

    return 0;
}