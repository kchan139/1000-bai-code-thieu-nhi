#include <iostream>
using namespace std;

int main ()
{
    cout << "Enter a month (1 - 12): ";
    unsigned short month;
    cin >> month;

    if (month >= 1 && month <= 12) 
    {
        unsigned short quarter = (month - 1) / 3 + 1;
        cout << "Quarter " << quarter << endl;
    } 
    else cout << "Invalid month input!" << endl;

    return 0;
}