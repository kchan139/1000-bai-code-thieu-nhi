#include <iostream>
using namespace std;

float average (float m, float l)
    { return (m + l) / 2; }

int main ()
{
    cout << "Full name: ";
    string name; getline(cin, name);

    cout << "Math: ";
    float math; cin >> math;

    cout << "Literature: ";
    float literature; cin >> literature;

    string line(30, '-');
    cout << line << endl;

    cout << "Student: " << name << endl
         << "Average: " << average(math, literature) << endl;

    return 0;
}