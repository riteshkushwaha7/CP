#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());

    int teams = 0, ts = 0;
    
    for (int i = 0; i < n; i++) {
        ts++;  
        
        if (a[i] * ts >= x) {
            teams++;   
            ts = 0;  
        }
    }

    cout << teams << "\n";
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
