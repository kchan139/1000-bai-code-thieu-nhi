#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    cout << "MULTIPLICATION TABLE: " << endl;
    for (unsigned short i = 1; i <= 10; i++)
    {
        for (unsigned short j = 1; j <= 9; j++)
        {
            string ii = to_string(i), jj = to_string(j);
            cout << setw(12) << left << 
                    jj + " x " + ii + " = " 
                    + to_string(i * j);
            cout << "|";
        }
        cout << endl;
    }

    return 0;
}