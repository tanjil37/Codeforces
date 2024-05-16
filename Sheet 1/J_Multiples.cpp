#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
    ll a, b, t;
    cin >> a >> b;
    if (a % b == 0 || b % a == 0)
        cout << "Multiples" << endl;
    else
        cout << "No Multiples" << endl;

    return 0;
}