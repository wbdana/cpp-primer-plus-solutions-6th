// chapter 3 exercise 3
// enter latitude in degrees, minutes, seconds
// display latitude in decimal format
#include <iostream>
int main()
{
    using namespace std;
    const int Minutes_Factor = 60;     // 60 minutes per degree
    const int Seconds_Factor = 60;     // 60 seconds per minute

    int degrees, minutes, seconds;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: __\b\b";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: __\b\b";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: __\b\b";
    cin >> seconds;
    double additional_minutes = double(minutes) + (double(seconds) / double(Seconds_Factor));
    double additional_degrees = additional_minutes / double(Minutes_Factor);
    double result = double(degrees) + additional_degrees;
    cout << degrees << " degrees, " << minutes << " minutes, and " << seconds << " seconds = " << result << endl;
    return 0;
}