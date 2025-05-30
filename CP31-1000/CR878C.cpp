#include <bits/stdc++.h>
using namespace std;

long long nCk(int n, int k) {
    long long N = n-k+1;
    return N*(N+1)/2;
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> v(n), pos;
        int cnt = 0;
        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 0; i < n; i++) {
            if (v[i] <= q) cnt++;
            else if(cnt>=k) {
                pos.push_back(cnt);
                cnt = 0;
            }else{
                cnt = 0;
            }
        }
        if (cnt >= k) pos.push_back(cnt);
        long long ans = 0;
        for (int i = 0; i < pos.size(); i++) ans += nCk(pos[i], k);
        cout << ans << endl;
    }
    return 0;
}
