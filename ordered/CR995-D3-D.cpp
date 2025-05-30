#include <bits/stdc++.h>
using namespace std;

long long fun() {
    long long n, x, y;
    cin >> n >> x >> y;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) cin >> a[i];
    
    long long total = accumulate(a.begin(), a.end(), 0LL);
    long long cnt = 0;

    // Sort the array to use two pointers
    sort(a.begin(), a.end());
    
    long long minsum = total - y, maxsum = total - x;

    // Two pointer technique
    for (long long i = 0; i < n - 1; ++i) {
        int j = i + 1;
        
        // Move j to the first valid pair where a[i] + a[j] >= minsum
        while (j < n && a[i] + a[j] < minsum) {
            j++;
        }

        // Now, count all pairs for which a[i] + a[j] <= maxsum
        for (int k = j; k < n && a[i] + a[k] <= maxsum; ++k) {
            cnt++;
        }
    }

    return cnt;
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        cout << fun() << endl;
    }
    return 0;
}
