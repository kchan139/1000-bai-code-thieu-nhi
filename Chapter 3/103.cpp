#include <iostream>
using namespace std;

int main() {
    cout << "dd mm yy: ";
    unsigned short day, month, year;
    cin >> day >> month >> year;

    unsigned short daysInMonth;
    
    switch (month - 1) 
    {
        case 1: case 3: case 5: 
        case 7: case 8: case 10: 
        case 0:
            daysInMonth = 31;
            break;
        
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        
        case 2:
            if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
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
    
    if (day == 1) 
    {
        if (month == 1) 
        {
            day = 31;
            month = 12;
            year--;
        }
         else 
         {
            day = daysInMonth;
            month--;
        }
    } 
    else day--;
    
    cout << "Previous day: " << day << "/" << month << "/" << year << endl;

    return 0;
}
