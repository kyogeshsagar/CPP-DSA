#include <bits/stdc++.h>
using namespace std;
// Functions are set of code which performs something for you
//  Functions are used to modularise code
//  Functions are used to increase readability
//  Functions are used to use same code multiple times
// void->which does not return any thing
// return
// parameterised
// non parameterised

// void printName(string nam)//void parameterised function
// {
//     cout << "Hey " << nam << endl;
// }
// int main()
// {
//     string name;
//     cin >> name;
//     printName(name);

//     string name2;
//     cin >> name2;
//     printName(name2);
//     return 0;
// }

// int sum(int no_1, int no_2) /*return parameterised function*/
// {
//     int num3 = no_1 + no_2;
//     return num3;
// }
// int main()
// {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int res = sum(num1, num2);
//     cout << res;
//     return 0;
// }
// void sum(int no_1, int no_2) /*same code in void parameterised function*/
// {
//     int num3 = no_1 + no_2;
//     cout << num3;
// }
// int main()
// {
//     int num1, num2;
//     cin >> num1 >> num2;
//     sum(num1, num2);

//     return 0;
// }

// finding max of two nos
// int maxx(int no_1, int no_2)
// {
//     if (no_1 >= no_2)
//         return no_1;
//     else
//         return no_2;
// }
// int main()
// {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int maximum = maxx(num1, num2);
//     cout << maximum;
//     return 0;
// }
// int maxx(int no_1, int no_2)
// {
//     if (no_1 >= no_2)
//         return no_1;
// }
// // looking for a return line
// // the program will not compile properly so it gives garbage value
// int main()
// {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int maximum = maxx(num1, num2);
//     cout << maximum;
//     return 0;
// }

// pass by value
// void dosomething(int no_)
// {
//     cout << no_ << "\n";
//     no_ += 5;
//     cout << no_ << "\n";
//     no_ += 5;
//     cout << no_ << "\n";
// }
// int main()
// {
//     int num;
//     cin >> num;
//     dosomething(num);
//     cout << num << "\n";
//     return 0;
// }

// pass by reference
// void dosomething(string &s)
// {
//     s[0] = 't';
//     cout << s << "\n";
// }
// int main()
// {
//     string s = "Yogesh";
//     dosomething(s);
//     cout << s << endl;
//     return 0;
// }
// void dosomething(int &no_)
// {
//     cout << no_ << "\n";
//     no_ += 5;
//     cout << no_ << "\n";
//     no_ += 5;
//     cout << no_ << "\n";
// }
// int main()
// {
//     int num;
//     cin >> num;
//     dosomething(num);
//     cout << num << "\n";
//     return 0;
// }

void doSomething(int arr[], int n)
{
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl;
}

int main()
{
    int n = 5;
    int arr[n];
    for (int i = 0; i < n; i = i + 1)
    {
        cin >> arr[i];
    }

    doSomething(arr, n);

    cout << "Value inside int main: " << arr[0] << endl;
    return 0;
}
// int main()
// {
//     int n = 5;
//     int arr[n];
//     for (int i = 0; i < n; i = i + 1)
//     {
//         cin >> arr[i];
//         }

//     for (int i = 0; i < n; i = i + 1)
//     {

//         cout << arr[i] << endl;
//     }

//     return 0;
// }