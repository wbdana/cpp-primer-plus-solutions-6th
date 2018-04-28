// chapter 2 exercise 2
// furlong to yard conversion
#include <iostream>

int main()
{
    using namespace std;
    int furlongs;
    int yards;
    cout << "Enter the number of furlongs: ";
    cin >> furlongs;
    yards = furlongs * 220;
    cout << furlongs << " furlong(s) = " << yards << " yards." << endl;
    return 0;
}