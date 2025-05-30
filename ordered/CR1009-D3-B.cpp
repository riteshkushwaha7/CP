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

int solve() {
    int n;
    cin>>n;
    int sum = 0;
    rep(i,0,n){
        int temp;
        cin>>temp;
        sum+=temp;
    }
    if(n==1) return sum;
    else return sum-(n-1);
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        cout<<solve()<<endl;
    }
    return 0;
}
