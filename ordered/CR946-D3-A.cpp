#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        int ans = (y + 1) / 2;
        int rem = y / 2 * 7 + y % 2 * 11;
        x = max(0, x - rem);
        ans += (x + 14) / 15;
        cout << ans << "\n";
    }

    return 0;
}