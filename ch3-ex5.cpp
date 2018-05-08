// chapter 3 exercise 5
// input long long current world population, long long current U.S. population
// output percentage of U.S. population as compared with world population
#include <iostream>
int main()
{
    using namespace std;
    long long world_population, us_population;
    cout << "Enter the world's population: __________\b\b\b\b\b\b\b\b\b\b";
    cin >> world_population;
    cout << "Enter the population of the US: __________\b\b\b\b\b\b\b\b\b\b";
    cin >> us_population;
    float percentage;
    percentage = (float)(us_population) / (float)(world_population) * 100;
    cout << "The population of the US is " << percentage << "\% of the world population." << endl;
    return 0;
}