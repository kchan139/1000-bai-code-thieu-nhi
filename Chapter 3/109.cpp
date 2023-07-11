#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    cout << setw (108) << left << "MULTIPLICATION TABLE: " << endl;
    for (unsigned short i = 1; i <= 10; i++)
    {
        for (unsigned int j = 1; j <= 9; j++)
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