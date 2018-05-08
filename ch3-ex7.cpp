// chapter 3 exercise 7
// input liters of gas used per 100 kilometers
// output miles per gallon
#include <iostream>
int main()
{
    using namespace std;
    const float Miles = 62.14;          // 100 km = 62.14 miles
    const float Liters_Factor = 3.875;      // 1 gallon = 3.875L

    float liters, gallons, mpg;
    cout << "How many linters per 100 kilometers did you get? ____\b\b\b\b";
    cin >> liters;
    gallons = liters / Liters_Factor;
    mpg = Miles / gallons;
    cout << "You got " << mpg << " miles per gallon." << endl;
    return 0;
}