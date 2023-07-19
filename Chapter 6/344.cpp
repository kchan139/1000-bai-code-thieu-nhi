#include <iostream>
#include <unordered_set>
using namespace std;

int countUniqueValues (double ** matrix, int row, int col)
{
    unordered_set<double> uniq;
    for (int r = 0; r < row; r++)
        for (int c = 0; c < col; c++)
            uniq.insert(matrix[r][c]);
    return uniq.size();
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
    cout << "Number of unique values: " << countUniqueValues (matrix, row, col) << endl;

    for (int r = 0; r < row; r++)
        delete[] matrix[r];
    delete[] matrix;

    return 0;
}