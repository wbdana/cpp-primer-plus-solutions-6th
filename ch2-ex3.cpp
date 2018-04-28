// chapter 2 exercise 3
#include <iostream>
void threeBlindMice();
void seeRun();

int main()
{
    threeBlindMice();
    seeRun();
}

void threeBlindMice()
{
    using namespace std;
    string words = "Three blind mice";
    cout << words << endl << words << endl;
}

void seeRun()
{
    using namespace std;
    string words = "See how they run";
    cout << words << endl << words << endl;
}