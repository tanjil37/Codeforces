#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    if (a <= b && a <= c)
    {
        if (b <= c)
        {
            cout << a << endl
                 << b << endl
                 << c;
        }
        else
        {
            cout << a << endl
                 << c << endl
                 << b;
        }
    }
    else if (b <= a && b <= c)
    {
        if (a <= c)
        {
            cout << b << endl
                 << a << endl
                 << c;
        }
        else
        {
        

            cout << b << endl
                 << c << endl
                 << a;
        }
    }
    else if (c <= a && c << b)
    {
        if (a <= b)
        {
            cout << c << endl
                 << a << endl
                 << b;
        }
        else
        {
            cout << c << endl
                 << b << endl
                 << a;
        }
    }
    cout << "\n\n"
         << a << endl
         << b << endl
         << c;
    return 0;
}