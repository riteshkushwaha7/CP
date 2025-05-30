#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

    int maximize(int x) {
        int maximum = 0;
        int y = 1;

        for (int i = 1; i < x; i++) {
            int current = gcd(x, i) + i;
            if (current > maximum) {
                maximum = current;
                y = i;
            }
        }

        return y;
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    while (t--) {
        int x;
        cin >> x;
        cout << sol.maximize(x) << endl;
    }

    return 0;
}
