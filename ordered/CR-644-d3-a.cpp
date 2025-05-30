// A. Minimal Square


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minisquare() {
        int a, b;
        cin >> a >> b;

        int side = max(max(a, b), 2 * min(a, b));

        return side * side;
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    while (t--) {
        cout << sol.minisquare() << endl;
    }

    return 0;
}
