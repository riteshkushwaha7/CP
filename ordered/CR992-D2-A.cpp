#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void game() {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < n; i++) {
            bool valid = true;
            for (int j = 0; j < n; j++) {
                if (i != j && abs(a[i] - a[j]) % k == 0) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                cout << "YES" << endl;
                cout << i + 1 << endl;
                return;
            }
        }

        cout << "NO" << endl;
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    while (t--) {
        sol.game();
    }

    return 0;
}