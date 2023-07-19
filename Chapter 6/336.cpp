#include <iostream>
using namespace std;

int frequencyOf (double ** matrix, int row, int col, double value)
{
    int count = 0;
    for (int r = 0; r < row; r++)
        for (int c = 0; c < col; c++)
            count += (matrix[r][c] == value);
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

    cout << "Enter a value: ";
    double value; cin >> value;

    cout << "Frequency of " << value << " in the matrix: "
         << frequencyOf (matrix, row, col, value) << endl;


    for (int r = 0; r < row; r++)
        delete[] matrix[r];
    delete[] matrix;

    return 0;
}