// chapter 3 exercise 4
// input int seconds
// output time in days, hours, minutes, seconds
#include <iostream>
int main()
{
    using namespace std;
    const int Hours_Factor = 24;        // 24 hours per day
    const int Minutes_Factor = 60;      // 60 minutes per hour
    const int Seconds_Factor = 60;     // 60 seconds per minute

    int days, hours, minutes, seconds, total_seconds;
    cout << "Enter the number of seconds: ________\b\b\b\b\b\b\b\b";
    cin >> total_seconds;
    minutes = total_seconds / Seconds_Factor;
    seconds = total_seconds % Seconds_Factor;
    hours = minutes / Minutes_Factor;
    minutes = minutes % Minutes_Factor;
    days = hours / Hours_Factor;
    hours = hours % Hours_Factor;
    cout << total_seconds << " seconds  = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    return 0;
}