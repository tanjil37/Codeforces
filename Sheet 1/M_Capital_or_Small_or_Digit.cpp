#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
    char c;
    cin >> c;
    if (c >= 48 && c <= 57)
    {
        cout << "IS DIGIT" << endl;
    }
    else if (c >= 65 && c <= 90)
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL" << endl;
    }
    else if (c >= 97 && c <= 122)
    {
        cout << "ALPHA" << endl
             << "IS SMALL" << endl;
    }
    return 0;
}