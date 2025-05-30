#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        // How many left steps were taken to reach l (final state)
        int left_needed = -l;

        // On day m, we can take up to m steps to the left,
        // but not more than left_needed
        int left_moves = min(m, left_needed);
        int right_moves = m - left_moves;

        // The interval becomes [-left_moves, right_moves]
        cout << -left_moves << " " << right_moves << '\n';
    }

    return 0;
}
