// chapter 2 exercise 6
// light years to astronomical units converter
#include <iostream>
double converter(double);

int main()
{
    using namespace std;

    double lightyears;
    cout << "Enter the number of light years: " << endl;
    cin >> lightyears;
    double au = converter(lightyears);
    cout << lightyears << " light years = " << au << " astronomical units." << endl;
    return 0;
}

double converter(double lightyears)
{
    return lightyears * 63240;
}