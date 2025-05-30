#include <bits/stdc++.h>
using namespace std;

#define int long long
int32_t main() {
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int cnt = 0, ans = 0;
    int maxi = INT_MIN;
    for(int i = n - 1; i >= 0; i--) {
        cnt++;
        maxi = max(maxi, v[i]);
        if(cnt * maxi > d) {
            ans++;
            cnt = 0;
            maxi = INT_MIN;
        }
    }

    cout << ans << endl;
}
