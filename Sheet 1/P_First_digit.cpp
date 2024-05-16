#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
    int n;
    cin >> n;
    short s = n / 1000;
    if (s % 2 == 0)
        cout << "EVEN";
    else
        cout << "ODD";
    return 0;
}