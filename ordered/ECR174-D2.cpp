#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n, 0), b(n - 2), c(n - 2, 0);

    for (int i = 0; i < n - 2; i++) {
        cin >> b[i];
    }

    for (int i = 1; i <= n - 2; i++) {
        if (b[i - 1] == 1) {
            a[i - 1] = 1;
            a[i] = 1;
            a[i + 1] = 1;
        }
    }

    for (int i = 1; i < n - 1; i++) {
        if (a[i - 1] == a[i] && a[i] == a[i + 1]) {
            c[i - 1] = 1;
        }
    }

    if (c == b)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
