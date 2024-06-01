#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    string result;
    int length = s1.length();

    for (int i = 0; i < length; ++i)
    {
        if (s1[i] == '1' && s2[i] == '1')
        {
            result += '0';
        }
        else if (s1[i] == '0' && s2[i] == '0')
        {
            result += '0';
        }
        else
        {
            result += '1';
        }
    }

    cout << result << endl;

    return 0;
}
