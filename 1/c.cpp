#include <iostream>
using namespace std;

static float Pi = 3.14;

int main()
{
    cout << "Enter the one-digit number: ";
    int value;
    cin >> value;
    cout << "\n";
    switch(value < Pi)
    {
        case true:
            cout << "Less than Pi\n";
            break;
        default:
            cout << "Bigger than Pi\n";
    }
    return 0;
}