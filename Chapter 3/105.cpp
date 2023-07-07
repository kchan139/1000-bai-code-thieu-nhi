#include <iostream>
using namespace std;

int main ()
{
    cout << "Enter a 2-digit positive integer: ";
    unsigned short num; cin >> num;

    unsigned short onesDigit = num % 10,
                   tensDigit = num / 10;

    if (tensDigit == 1)
    {
        switch (onesDigit) 
        {
            case 0: cout << "Ten";       break;
            case 1: cout << "Eleven";    break;
            case 2: cout << "Twelve";    break;
            case 3: cout << "Thirteen";  break;
            case 4: cout << "Fourteen";  break;
            case 5: cout << "Fifteen";   break;
            case 6: cout << "Sixteen";   break;
            case 7: cout << "Seventeen"; break;
            case 8: cout << "Eighteen";  break;
            case 9: cout << "Nineteen";  break;
        }
    }
    else
    {
        switch (tensDigit) 
        {
            case 2: cout << "Twenty ";  break;
            case 3: cout << "Thirty ";  break;
            case 4: cout << "Forty ";   break;
            case 5: cout << "Fifty ";   break;
            case 6: cout << "Sixty ";   break;
            case 7: cout << "Seventy "; break;
            case 8: cout << "Eighty ";  break;
            case 9: cout << "Ninety ";  break;
        }
        
        switch (onesDigit) 
        {
            case 0: if (!tensDigit) cout << "Zero"; break;
            case 1: cout << "One";   break;
            case 2: cout << "Two";   break;
            case 3: cout << "Three"; break;
            case 4: cout << "Four";  break;
            case 5: cout << "Five";  break;
            case 6: cout << "Six";   break;
            case 7: cout << "Seven"; break;
            case 8: cout << "Eight"; break;
            case 9: cout << "Nine";  break;
        }
    }
    cout << endl;

    return 0;
}