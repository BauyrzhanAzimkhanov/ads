#include <iostream>
using namespace std;

int main()
{
    int counter = 0, accumulator = 1;
    do
    {
        accumulator++;
        counter++;
        cout << accumulator * accumulator << "\n";
    }
    while(counter < 5);
    cout << accumulator * accumulator << "\n";
    return 0;
}