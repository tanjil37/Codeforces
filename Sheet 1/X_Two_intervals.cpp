#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a >= c && a <= d)
    {
        if (b >= d)
        {
            cout << a << " " << d;
        }
        else if (d >= b)
        {
            cout << a << " " << b;
        }
    }
    else if (c >= a && c <= b)
    {
        if (d >= b)
        {
            cout << c << " " << b << endl;
        }
        else if (b >= d)
        {
            cout << c << " " << d;
        }
    }
    else
    {
        cout << -1;
    }
    return 0;
}