#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(v) (int)v.size()
#define fi first
#define se second
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)

const int MOD = 1e9 + 7;
const int INF = 1e18;

int32_t main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi a(n);
        rep(i, 0, n) cin >> a[i];

        set<int> s(all(a));
        int mex = 0;
        while (s.count(mex)) ++mex;

        vector<pii> operations;
        operations.pb({1, n}); 
        operations.pb({1, 1}); 

        cout << sz(operations) << endl;
        for (auto &op : operations) {
            cout << op.fi << " " << op.se << endl;
        }
    }
    return 0;
}
