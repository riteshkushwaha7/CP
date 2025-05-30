#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll solve() {
    ll n, x, k;
    cin >> n >> x >> k;
    string s;
    cin >> s;

    bool a = false, b = false;
    ll p = 0;
    ll fr = -1, t = -1;

    for (ll i = 0; i < n; i++) {
        ll q = (s[i] == 'R') ? 1 : -1;
        p += q;

        if (!a && x + p == 0) {
            fr = i + 1;
            a = true;
        } 
        if (!b && p == 0) {
            b = true;
            t = i + 1;
        }
    }

    if (fr == -1 || fr > k) {
        return 0;
    }

    ll resets = 1;
    ll tu = fr;

    if (t == -1) {
        return resets;
    }

    ll extra = (k - tu) / t;
    resets += extra;
    return resets;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
    return 0;
}
