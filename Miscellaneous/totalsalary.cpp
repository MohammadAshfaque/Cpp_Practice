#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int bs;
    string str;
    char c;
    cin >> bs >> str;
    c = str[0];
    int all;
    if (c == 'A')
    {
        all = 1700;
    }
    else if (c == 'B')
    {
        all = 1500;
    }
    else
    {
        all = 1300;
    }
    double ts = ((bs + (0.20 * bs) + (0.50 * bs) + all) - (0.11 * bs));
    double p = round(ts);
    int h = static_cast<int>(p);
    cout << h << endl;
    
}
