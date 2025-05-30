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

bool check(const string &s) {
    int n = sz(s);
    rep(i, 0, n / 2) {
        if (s[i] != s[n - 1 - i])
            return s[i] < s[n - 1 - i];
    }
    return false; 
}

string solve() {
    int length, max_swaps;
    cin >> length >> max_swaps;
    string input_string;
    cin >> input_string;

    if (length == 1) {
        return "NO";
    }

    bool allSame = true;
    rep(i, 1, length) {
        if (input_string[i] != input_string[0]) {
            allSame = false;
            break;
        }
    }
    if (allSame) {
        return "NO";
    }

    if (check(input_string)) {
        return "YES";
    }

    return (max_swaps >= 1 ? "YES" : "NO");
}

int32_t main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
    return 0;
}
