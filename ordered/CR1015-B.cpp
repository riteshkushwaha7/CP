#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
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

unsigned long long gcd(unsigned long long a, unsigned long long b) {
    while (b) {
        unsigned long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

void solve() {
    int n;
    cin >> n;
    vector<unsigned long long> a(n);
    readVector(a, n);

    unsigned long long mn = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < mn) mn = a[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == mn) cnt++;
    }

    vector<unsigned long long> q;
    vector<int> isMin;
    for (int i = 0; i < n; i++) {
        if (a[i] % mn == 0) {
            q.push_back(a[i] / mn);
            isMin.push_back(a[i] == mn);
        }
    }

    int sz = q.size();
    unsigned long long g = 0;
    for (int i = 0; i < sz; i++) {
        g = (i == 0) ? q[i] : gcd(g, q[i]);
    }

    if (g != 1 || sz < 2) {
        cout << "No\n";
        return;
    }

    vector<unsigned long long> pre(sz), suf(sz);
    pre[0] = q[0];
    for (int i = 1; i < sz; i++) {
        pre[i] = gcd(pre[i - 1], q[i]);
    }

    suf[sz - 1] = q[sz - 1];
    for (int i = sz - 2; i >= 0; i--) {
        suf[i] = gcd(suf[i + 1], q[i]);
    }

    bool ok = false;
    for (int i = 0; i < sz; i++) {
        if (isMin[i]) {
            unsigned long long g2 = 0;
            if (i > 0) g2 = pre[i - 1];
            if (i < sz - 1) {
                if (g2 == 0) g2 = suf[i + 1];
                else g2 = gcd(g2, suf[i + 1]);
            }
            if (g2 == 1) {
                ok = true;
                break;
            }
        }
    }

    cout << (ok ? "Yes\n" : "No\n");
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}