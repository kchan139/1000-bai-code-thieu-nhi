#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    cout << "M x N: ";
    unsigned short m, n;
    cin >> m >> n;

    string line (m, '-');
    
    for (unsigned short i = 0; i < n; i++)
    {
        for (unsigned short j = 0; j < m; j++)
            cout << "*";
        cout << endl;
    }
    cout << line << endl;

    for (unsigned short i = 0; i < n; i++)
    {
        for (unsigned short j = 0; j < m; j++)
            (!(j && i) || j == m-1 || i == n-1)?
                cout << "*" : cout << " ";
        cout << endl;
    }

    return 0;
}