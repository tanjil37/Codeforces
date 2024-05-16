#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
    int x, y, z;
    char c, q;
    cin >> x >> c >> y >> q >> z;
    if (c == '+')
    {
        if (x + y == z)
            cout << "Yes" << endl;
        else
            cout << x + y << endl;
    }
    if (c == '-')
    {
        if (x - y == z)
            cout << "Yes" << endl;
        else
            cout << x-y << endl;
    }
    if (c == '*')
    {
        if (x*y==z)
            cout << "Yes" << endl;
        else
            cout << x*y << endl;
    }

    return 0;
}