// chapter 3 exercise 1
// convert int inches to feet and inches
#include <iostream>
int main()
{
    using namespace std;
    const int Feet = 12;        // number of inches per foot

    cout << "Please enter your height in inches:__\b\b";
    int inches;
    cin >> inches;
    int feet = inches / Feet;
    int remaining_inches = inches % Feet;
    cout << "You are " << feet << " feet and " << remaining_inches << " inch(es) tall.";
    return 0;
}