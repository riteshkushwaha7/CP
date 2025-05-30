#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void heating() {
        long long x, y;
        cin >> x >> y;

        if (x == 1) {
            cout << y * y; 
            return;
        }

        int div = y / x;
        int rem = y % x;
        long long ans = 0;

        int mins = x - rem;
        ans += rem * (long long)(div + 1) * (div + 1); // Ensure all operations are integer-based
        ans += mins * (long long)div * div;

        cout << ans;
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;
    while (t--) {
        sol.heating();
        cout << endl;
    }
    return 0;
}
