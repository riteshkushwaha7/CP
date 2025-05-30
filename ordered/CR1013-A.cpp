#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_map<int, int> required = {{0, 3}, {1, 1}, {3, 1}, {2, 2}, {5, 1}};
    unordered_map<int, int> count;

    for (int i = 0; i < n; i++) {
        count[a[i]]++;

        bool formed = true;
        for (auto &p : required) {
            if (count[p.first] < p.second) {
                formed = false;
                break;
            }
        }

        if (formed) {
            cout << i + 1 << "\n"; 
            return;
        }
    }
    
    cout << "0\n"; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
