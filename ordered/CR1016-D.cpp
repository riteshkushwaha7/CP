#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; i++)

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<ll> vll;
typedef vector<pi> vpi;

template<typename T>
void readVector(vector<T>& v, int n) {
    rep(i, 0, n) cin >> v[i];
}

template<typename T>
void printVector(const vector<T>& v) {
    for (auto& x : v) cout << x << " ";
    cout << "\n";
}

ll f(int n, int x, int y) {
    if (n == 1) {
        if (x == 1 && y == 1) return 1;
        if (x == 2 && y == 2) return 2;
        if (x == 2 && y == 1) return 3;
        return 4;
    }
    int h = 1 << (n - 1);
    ll b = 1LL << (2 * (n - 1));
    if (x <= h && y <= h) return f(n - 1, x, y);
    if (x > h && y > h) return b + f(n - 1, x - h, y - h);
    if (x > h && y <= h) return 2 * b + f(n - 1, x - h, y);
    return 3 * b + f(n - 1, x, y - h);
}

pi g(int n, ll d) {
    if (n == 1) {
        if (d == 1) return {1, 1};
        if (d == 2) return {2, 2};
        if (d == 3) return {2, 1};
        return {1, 2};
    }
    int h = 1 << (n - 1);
    ll b = 1LL << (2 * (n - 1));
    if (d <= b) {
        pi p = g(n - 1, d);
        return {p.ff, p.ss};
    }
    if (d <= 2 * b) {
        pi p = g(n - 1, d - b);
        return {p.ff + h, p.ss + h};
    }
    if (d <= 3 * b) {
        pi p = g(n - 1, d - 2 * b);
        return {p.ff + h, p.ss};
    }
    pi p = g(n - 1, d - 3 * b);
    return {p.ff, p.ss + h};
}

void solve() {
    int n, q;
    cin >> n >> q;
    while (q--) {
        string s;
        cin >> s;
        if (s == "->") {
            int x, y;
            cin >> x >> y;
            cout << f(n, x, y) << endl;
        } else {
            ll d;
            cin >> d;
            pi p = g(n, d);
            cout << p.ff << " " << p.ss << endl;
        }
    }
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
