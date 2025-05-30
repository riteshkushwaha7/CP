#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n, m, k;
    cin >> n >> m >> k;

    if (k == n * m) return m;  // If all seats are occupied, return full row length

    int maxc = k / n;   // Max participants per row
    int leftover = k % n;  // Remaining participants

    return maxc + (leftover > 0 ? 1 : 0); // Adjust if extra participants exist
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }

    return 0;
}
