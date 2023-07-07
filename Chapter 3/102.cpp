#include <iostream>
using namespace std;

int main ()
{
    cout << "dd mm yy: ";
    unsigned short day, month, year;
    cin >> day >> month >> year;

    unsigned short daysInMonth;
    
    switch (month) 
    {
        case 1: case 3: case 5: 
        case 8: case 10: 
        case 12: 
            daysInMonth = 31;
            break;
        
        case 4: case 6: case 9: 
        case 11:
            daysInMonth = 30;
            break;
        
        case 2:
            if (!(year % 400) || !(year % 100) || !(year % 4))
                daysInMonth = 29;
            else
                daysInMonth = 28;
            break;
        
        default:
            cout << "Invalid month input!" << endl;
            return 0;
    }
    
    if (day < 1 || day > daysInMonth) 
    {
        cout << "Invalid day input!" << endl;
        return 0;
    }
    
    if (day == daysInMonth) 
    {
        if (month == 12) 
        {
            day = month = 1;
            year++;
        } 
        else 
        {
            day = 1;
            month++;
        }
    } 
    else day++;
    
    cout << "Next day: " << day << "/" << month << "/" << year << endl;

    return 0;
}
