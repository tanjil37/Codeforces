#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
    double x, y;
    cin >> x >> y;
    if (x > 0 && y > 0)
        cout << "Q1";
    if (x < 0 && y > 0)
        cout << "Q2";
    if (x < 0 && y < 0)
        cout << "Q3";
    if (x > 0 && y < 0)
        cout << "Q4";
    if (x == 0 && y == 0)
        cout << "Origem";
    if (x == 0 && y != 0)
        cout << "Eixo Y";
    if (x != 0 && y == 0)
        cout << "Eixo X";
    return 0;
}