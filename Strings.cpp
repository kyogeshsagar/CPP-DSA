#include <bits/stdc++.h>
using namespace std;
// string initialization and take it size
int main()
{
    string s = "Striver";
    int len = s.size();
    s[len - 1] = 'y';
    cout << s[len - 1] << "\n"
         << s[4];
    return 0;
}