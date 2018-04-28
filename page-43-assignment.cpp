// scratch assignment testing
# include <iostream>

int main()
{
    using namespace std;

    int steinway;
    int baldwin;
    int yamaha;

    yamaha = baldwin = steinway = 88;

    cout << "yamaha: " << yamaha << " baldwin: " << baldwin << " steinway: " << steinway << endl;
    steinway = 97;
    cout << "yamaha: " << yamaha << " baldwin: " << baldwin << " steinway: " << steinway << endl;
    return 0;
}