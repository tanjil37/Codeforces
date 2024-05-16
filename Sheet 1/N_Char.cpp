#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
    char c;
    cin >> c;

    if (c >= 65 && c <= 90)
    {
        cout << (char)(c + 32) << endl;
    }
    else if (c >= 97 && c <= 122)
    {
        cout << (char)(c - 32) << endl;
    }
    return 0;
}