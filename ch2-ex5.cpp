// chapter 2 exercise 5
// main() calls user-defined function
// user-defined function takes Celsius and converts to Fahrenheit
#include <iostream>
double converter(int);

int main()
{
    using namespace std;
    int celsius;
    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    int fahrenheit = converter(celsius);
    cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << endl;
    return 0;
}

double converter(int celsius)
{
    return (1.8 * celsius) + 32.0;
}