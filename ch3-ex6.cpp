// chapter 3 exercise 6
// input miles driven, gallons of gas used
// output miles per gallon
#include <iostream>
int main()
{
    using namespace std;
    
    int miles_driven, gallons_used;
    cout << "How many miles have you driven? ___\b\b\b";
    cin >> miles_driven;
    cout << "And how many gallons of gas did you use? ___\b\b\b";
    cin >> gallons_used;
    float mpg = float(miles_driven) / float(gallons_used);
    cout << "You got " << mpg << " miles per gallon.";
    return 0;
}