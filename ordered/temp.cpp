#include <bits/stdc++.h>
using namespace std;
#define ll long long

void rec(ll &ans, ll l, ll u, ll k) {
    if (k > u - l + 1 || l == u) return;

    ll m = (l + u) / 2;

    if ((u - l + 1) % 2 == 1) {
        ans += m;
        ll temp = ans;
        rec(ans, l, m - 1, k); 
        ans += (ans-temp); 
    } else {
        ll temp = ans;
        rec(ans, l, m, k); 
        ans += (ans-temp);
    }
}

ll solve() {
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    rec(ans, 1, n, k); 
    return ans;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
    return 0;
}
