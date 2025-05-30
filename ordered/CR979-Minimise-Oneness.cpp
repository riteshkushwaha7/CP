#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string output(int n) {
        string result;
        for (int i = 0; i < n / 2; i++) {
            result.push_back('0');
        }
        for (int i = 0; i < (n - n / 2); i++) {
            result.push_back('1');
        }
        return result;
    }

    void solve() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            cout << output(n) << endl;
        }
    }
};

int main() {
    Solution sol;
    sol.solve();
    return 0;
}
