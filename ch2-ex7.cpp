// chapter 2 exercise 7
// show time
#include <iostream>
void displayTime(int, int);

int main()
{
    using namespace std;
    int hours;
    int minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    displayTime(hours, minutes);
    return 0;
}

void displayTime(int hours, int minutes)
{
    using namespace std;
    cout << "Time: " << hours << ":" << minutes << endl;
}