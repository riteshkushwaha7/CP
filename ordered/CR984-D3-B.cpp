#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n, k;
    cin >> n >> k;
    vector<int> hash(k + 1, 0);
    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        hash[a] += b;
    }
    int total = accumulate(hash.begin(), hash.end(), 0);
    if (n >= k) return total;

    int cnt = 0;
    for (int i = 0; i <= k; i++) { 
        if (hash[i]) cnt++;
    }
    if (n >= cnt) return total;
    int ans = 0;
    sort(hash.begin(), hash.end(), greater<int>()); 
    for (int i = 0; i < n; i++) ans += hash[i];
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
    return 0;
}
