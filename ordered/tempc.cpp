#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> penalty(n);
    for (int i = 0; i < n; i++) cin >> penalty[i];

    vector<pair<int, int>> wrong_cells;
    
    // Identify wrongly colored cells
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            wrong_cells.emplace_back(penalty[i], i);
        }
    }
    
    if (wrong_cells.empty()) {
        cout << "0\n";
        return;
    }

    // Sort by penalty to minimize cost
    sort(wrong_cells.begin(), wrong_cells.end());

    set<int> painted;
    int ops = 0;

    for (auto &[p, idx] : wrong_cells) {
        if (ops >= k) break;

        if (painted.count(idx)) continue; // Skip if already painted

        // Paint the segment starting from idx
        for (int i = idx; i < min(n, idx + k); i++) {
            if (s[i] == 'B') painted.insert(i);
        }
        ops++;
    }

    int max_penalty = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B' && !painted.count(i)) {
            max_penalty = max(max_penalty, penalty[i]);
        }
    }

    cout << max_penalty << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
