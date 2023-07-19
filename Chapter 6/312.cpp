#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    cout << "Dimension (row, column): ";
    int row, col; cin >> row >> col;

    double ** matrix = new double * [row];
    for (int r = 0; r < row; r++)
        matrix[r] = new double [col];

    cout << "Entries (row by row): " << endl;
    for (int r = 0; r < row; r++)
        for (int c = 0; c < col; c++)
            cin >> matrix[r][c];

    cout << "Your matrix: " << endl;
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
            cout << setw(6) << fixed << setprecision(2)
                 << matrix[r][c];
        cout << endl << endl;
    }


    for (int r = 0; r < row; r++)
        delete [] matrix[r];
    delete [] matrix;

    return 0;
}