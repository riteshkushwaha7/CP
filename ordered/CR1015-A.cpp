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

void solve() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << -1 << "\n";
        return;
    }

    vi res;
    res.pb(n);      
    res.pb(1);     
    rep(i, 3, n + 1) {
        res.pb(i - 1);  
    }

    printVector(res);
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
