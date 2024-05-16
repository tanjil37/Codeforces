#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
    int x, y;
    char c;
    cin >> x >> c >> y;
    if (c == '+')
        cout << x + y;
    else if (c == '-')
        cout << x - y;
    else if (c == '*')
        cout << x * y;
    else if (c == '/')
        cout << x / y;
    return 0;
}