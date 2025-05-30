#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void solve() {
        int n, b;
        cin >> n >> b;
        vector<int> arr(n + 1);
        for (int idx = 1; idx <= n; ++idx) {
            cin >> arr[idx];
        }

        if (n == b) {
            int res = -1;
            for (int idx = 2; idx <= n; idx += 2) {
                if (arr[idx] != idx / 2) {
                    res = idx / 2;
                    break;
                }
            }
            if (res == -1) {
                res = n / 2 + 1;
            }
            cout << res << endl;
        } else {
            int pos = -1;
            for (int idx = 2; idx <= n - b + 2; ++idx) {
                if (arr[idx] != 1) {
                    pos = idx;
                    break;
                }
            }

            if (pos == -1) {
                int cur = 2;
                for (int idx = n - b + 1; idx <= n; idx += 2) {
                    if (arr[idx] != cur) {
                        break;
                    }
                    cur++;
                }
                cout << cur << endl;
            } else {
                cout << 1 << endl;
            }
        }
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;
    while (t--) {
        sol.solve();
    }
    return 0;
}




