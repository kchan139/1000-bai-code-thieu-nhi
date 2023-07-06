#include <iostream>
using namespace std;

int main ()
{
    cout << "All odd numbers smaller than 100: " << endl;

    for (unsigned int i = 1; i < 100; i += 2)
        cout << i << " ";
    cout << endl;

    return 0;
}