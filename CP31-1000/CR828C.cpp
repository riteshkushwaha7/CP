#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;

        if (c == 'g') {
            cout << 0 << endl;
        } else {
            vector<int> next_g(n, -1);
            int last_g = -1;

            for (int i = 2 * n - 1; i >= 0; --i) {
                int idx = i % n;
                if (s[idx] == 'g') {
                    last_g = i;
                }
                if (last_g != -1 && s[idx] == c) {
                    next_g[idx] = last_g - i;
                }
            }

            int maxi = *max_element(next_g.begin(), next_g.end());
            cout << maxi << endl;
        }
    }
    return 0;
}
