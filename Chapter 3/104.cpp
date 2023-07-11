#include <iostream>
using namespace std;

int main ()
{
    cout << "dd mm yy: ";
    unsigned short day, month, year;
    cin >> day >> month >> year;

    unsigned short dayCount = day;
    unsigned short daysInMonths[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (!((year % 400) && (year % 100) && (year % 4)))
        daysInMonths[2] = 29;

    for (unsigned short i = 1; i < month; i++)
        dayCount += daysInMonths[i];

    cout << "Day count: " << dayCount << endl;

    return 0;
}