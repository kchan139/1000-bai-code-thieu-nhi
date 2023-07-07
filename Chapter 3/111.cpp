#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    cout << "H: ";
    unsigned short h; cin >> h;

    string line (h*2, '-');

    //===== A =====//
    for (unsigned short i = 0; i < h; i++)
    {
        cout << setw(h - i);
        for (unsigned short j = 0; j < i * 2 + 1; j++)
            cout << "*";
        cout << endl;
    }
    cout << line << endl;

    //===== B =====//
    for (unsigned short i = 0; i < h; i++)
    {
        cout << setw(h - i);
        for (unsigned short j = 0; j < i * 2 + 1; j++)
            (!j || j == i*2 || i == h-1)? 
                cout << "*" : cout << " ";
        cout << endl;
    }
    cout << line << endl;

    //===== C =====//
    for (unsigned short i = 0; i < h; i++)
    {
        for (unsigned short j = 0; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    cout << line << endl;

    //===== D =====//
    for (unsigned short i = 0; i < h; i++)
    {
        for (unsigned short j = 0; j <= i; j++)
            (!j || j == i || i == h-1)?
                cout << "*" : cout << " ";
        cout << endl;
    }

    return 0;
}