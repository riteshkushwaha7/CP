#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; i++)

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<ll> vll;
typedef vector<pii> vpi;

template<typename T>
void readVector(vector<T>& v, int n) {
    rep(i, 0, n) cin >> v[i];
}

template<typename T>
void printVector(const vector<T>& v) {
    for (auto& x : v) cout << x << " ";
    cout << "\n";
}

ll string_to_ll(string s) {
    ll res = 0;
    for (char c : s) {
        res = res * 10 + (c - '0');
    }
    return res;
}

bool is_prime(ll n) {
    if (n <= 1) return false;
    for (ll i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve() {
    int x, k;
    cin >> x >> k;
    string sx = to_string(x), sy = "";
    rep(i, 0, k) sy += sx;
    ll y = string_to_ll(sy);
    cout << (is_prime(y) ? "YES" : "NO") << endl;
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
