#include <iostream>
using namespace std;

int main ()
{
    cout << "All odd numbers smaller than 100 except 5, 7, 93: " << endl;

    for (unsigned short i = 1; i < 100; i += 2)
        if (i != 5 && i != 7 && i != 93)
            cout << i << " ";
    cout << endl;

    return 0;
}