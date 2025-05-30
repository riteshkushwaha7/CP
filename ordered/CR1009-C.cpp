#include <bits/stdc++.h>
using namespace std;
#define int long long

void optimize(vector<int> &v, int &a) {
    sort(v.begin(), v.end());
    int n = v.size();
    int sum_even = 0, sum_odd = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) sum_even += v[i];
        else sum_odd += v[i];
    }
    a = sum_even - sum_odd;

    if (find(v.begin(), v.end(), a) != v.end() || a <= 0 || a >= 1e18) {
        reverse(v.begin(), v.end());
        sum_even = 0;
        sum_odd = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) sum_even += v[i];
            else sum_odd += v[i];
        }
        a = sum_even - sum_odd;
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(2 * n);
    for (int i = 0; i < 2 * n; i++) cin >> v[i];

    for (int i = 1; i < 2 * n; i += 2) {
        if (v[i] > v[i - 1]) swap(v[i], v[i - 1]);
    }

    int a = 0;
    optimize(v, a);
    cout << a << " ";
    for (int i = 0; i < 2 * n; i++) cout << v[i] << " ";
    cout << endl;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
