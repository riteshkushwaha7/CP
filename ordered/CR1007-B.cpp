#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool sqcheck(ll n) {
    ll sq = sqrt(n);
    return sq * sq == n;
}

void solve() {
    int n;
    cin >> n;
    ll sum = (1LL * n * (n + 1)) / 2;
    
    if (sqcheck(sum)) {
        cout << "-1\n";
        return;
    }

    vector<bool> v(n + 1, false);
    vector<int> ans;
    ll ps = 0;

    while(ans.size()!=n){
        for (int i = n; i >= 1; i--) {  
            if (!sqcheck(ps + i) && !v[i]) {
                ps += i;
                ans.push_back(i);
                v[i] = true;
            }
        }
    }



    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
