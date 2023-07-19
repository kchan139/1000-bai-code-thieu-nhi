#include <iostream>
using namespace std;

short countDigits (int ** matrix, int row, int col)
{
    bool digits[10] = {0};
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            int tmp = matrix[r][c];
            if (!tmp) digits[0] = true;
            while (tmp)
            {
                digits[tmp % 10] = true;
                tmp /= 10;
            }
        }
    }
    short count = 0;
    for (int d = 0; d < 10; d++)
        count += digits[d];

    return count;
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
    cout << "Total number of digits: " << countDigits (matrix, row, col) << endl;

    for (int r = 0; r < row; r++)
        delete[] matrix[r];
    delete[] matrix;

    return 0;
}