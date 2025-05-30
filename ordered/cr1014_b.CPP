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

void solve() {
    string s;
    cin >> s;
    int b = 0, cnt = 0;
    for (auto c : s) {
        if (c == '0') cnt++;
        else b = max(b, cnt + 1);
    }
    cout << s.size() - b << endl;
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
