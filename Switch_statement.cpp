#include <bits/stdc++.h>
using namespace std;
// Take the day no and print the corresponding day
// for 1 print Monday,
// for 2 print Tuesday and so on for 7 print Sunday.
int main()
{
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "fiday";
        break;
    case 6:
        cout << "Sturrfg";
        break;
    case 7:
        cout << "Tuesday";
        break;
    default:
        cout << "Invalid";
    }
    return 0;
}
