#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> less_than_max, equal_to_max;
    
    int max_val = INT_MIN;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        max_val = max(max_val, v[i]);
    }

    for (int num : v) {
        if (num == max_val)
            equal_to_max.push_back(num);
        else
            less_than_max.push_back(num);
    }

    if (!less_than_max.empty() && !equal_to_max.empty()) {
        for (int x : less_than_max) cout << x << " ";
        cout << '\n';
        for (int x : equal_to_max) cout << x << " ";
        cout << '\n';
    } else {
        cout << -1 << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
