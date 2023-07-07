#include <iostream>
using namespace std;

int main() 
{
    const unsigned int target = 200000;
    unsigned int count = 1;

    for (unsigned int  x = 0; x <= target / 5000; x++)
        for (unsigned int  y = 0; y <= target / 2000; y++)
            for (unsigned int  z = 0; z <= target / 1000; z++)
                if ((x * 5000 + y * 2000 + z * 1000) == target)
                    cout << "Combination " << count++ << ": " 
                    << x << " * 5000, " 
                    << y << " * 2000, " 
                    << z << " * 1000" << endl;

    return 0;
}