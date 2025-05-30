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


void solve() {
    int n;
    cin >> n;
    int x = 0;
    while (n--) {
        string s;
        cin >> s;
        if (s == "X++" || s == "++X") x++;
        else x--;
    }
    cout << x << endl;
}


int main() {
    fastio();
    solve();
    return 0;
}
