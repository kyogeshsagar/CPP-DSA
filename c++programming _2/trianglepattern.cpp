#include <bits/stdc++.h>
using namespace std;

// void print2(int n); // Function declaration
// void print3(int n);
// void print4(int n);
// void print7(int n);
// void print8(int n);

void print11(int n);
int main()
{
    int n;
    cout << "Enter the value of n till that you want to print : ";
    cin >> n;
    // print7(n);
    // print8(n);
    print11(n);
    return 0;
}

// void print2(int n) // Function definition
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
// void print4(int n) // Function definition
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }
// void print5(int n) // Function definition
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= (n - i + 1); j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
// void print6(int n) // Function definition
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= (n - i + 1); j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }
// void print7(int n) // Function definition
// {
//     for (int i = 0; i < n; i++)
//     {
//         // 1st Space
//         for (int j = 0; j < (n - i - 1); j++)
//         {
//             cout << " ";
//         }
//         // stars
//         for (int j = 0; j < (2 * i + 1); j++)
//         {
//             cout << "*";
//         }
//         // space
//         for (int j = 0; j < (n - i - 1); j++)
//         {
//             cout << " ";
//         }

//         cout << endl;
//     }
// }
// void print8(int n) // Function definition
// {
//     for (int i = 0; i < n; i++)
//     {
//         // 1st Space
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         // stars
//         for (int j = 0; j < 2 * n - (2 * i + 1); j++)
//         {
//             cout << "*";
//         }
//         // space
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }

//         cout << endl;
//     }
// }
// void print10(int n)
// {
//     for (int i = 1; i <= 2 * n - 1; i++)
//     {
//         int stars = i;
//         if (i > n)
//             stars = 2 * n - i;
//         for (int j = 1; j <= stars; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
void print11(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}