#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        unsigned int x;
        cin >> x;

        vector<int> result;
        while (x > 0) {
            if (x & 1) {
                if (!result.empty() && result.back() == 1) {
                    result.back() = 0;
                    result.push_back(-1);
                    x++;
                } else {
                    result.push_back(1);
                }
            } else {
                result.push_back(0);
            }
            x >>= 1;
        }

        int n = result.size();
        cout << n << endl;
        for (int i = 0; i < n; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
