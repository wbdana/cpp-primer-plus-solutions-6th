// chapter 3 exercise 2
// convert height in feet and inches and weight in pounds to BMI
#include <iostream>
int main()
{
    using namespace std;
    const int Feet = 12;                // 12 inches per foot
    const float Meters_Factor = 0.0254; // conversion factor for feet to meters
    const float Kg_Factor = 2.2;        // conversion factor for pounds to kg

    cout << "Please enter your height in feet (round down):__\b\b";
    int feet, inches, pounds;
    cin >> feet;
    cout << "And how many inches?__\b\b";
    cin >> inches;
    cout << "And how many pounds do you weigh?___\b\b\b";
    cin >> pounds;
    int total_inches = (feet * Feet) + inches;
    float meters = total_inches * Meters_Factor;
    float kilograms = pounds / Kg_Factor;
    float bmi = (kilograms) / (meters * meters);
    cout << "Your BMI is " << bmi << ".";
    return 0;
}