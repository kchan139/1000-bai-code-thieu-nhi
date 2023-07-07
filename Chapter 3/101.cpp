#include <iostream>
using namespace std;

int main() 
{
    unsigned short month, year;
    cout << "Enter the month (1-12): ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    
    unsigned short days;
    
    switch (month) {
        case 1: case 3: case 5:
        case 7: case 8: case 10:
        case 12: days = 31; break;
        
        case 4: case 6: case 9:
        case 11: days = 30; break;
        
        case 2:
            if (!(year % 400) || !(year % 100) || !(year % 4))
                days = 29;
            else days = 28;
            break;
        
        default:
            cout << "Invalid month input!" << endl;
            return 0;
    }
    
    cout << "Number of days: " << days << endl;
    
    return 0;
}
