#include <bits/stdc++.h>
using namespace std;

// Macros for CP
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sz(x) (int)(x).size()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define repr(i, a, b) for (int i = a; i >= b; i--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define deb(x) cerr << #x << " = " << x << endl;

// Constants
const int INF = 1e18;
const int MOD = 1e9 + 7;
const int N = 2e5 + 5;

template <typename T> void printVector(vector<T> &v) { for (auto &i : v) cout << i << " "; cout << endl; }
template <typename T> void inputVector(vector<T> &v) { for (auto &i : v) cin >> i; }

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    bool b1 = false;
    bool crack = true;

    rep(i, 0, n) {
        if (a[i] == '1' && !b1) {
            crack = false;
            break;
        }
        if (b[i] == '1') b1 = true;
    }

    crack ? yes : no;
}

int32_t main() {
    fastio;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}