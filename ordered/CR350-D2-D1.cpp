#include <bits/stdc++.h>
using namespace std;
 
int magic() {
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n), b(n);
    for (long long i = 0; i < n; i++) cin >> a[i];
    for (long long i = 0; i < n; i++) cin >> b[i];
 
    long long val, cnt = 0;
 
    while (true) {
        val = 0; 
        for (long long i = 0; i < n; i++) {
            if (b[i] >= a[i]) {
                b[i] -= a[i];
            } else {
                val += (a[i] - b[i]);
                b[i] = 0;
            }
        }
        if (k >= val) {
            k -= val;
            cnt++;
        } else {
            break;
        }
    }
 
    return cnt;
}
 
int main() {
    cout << magic() << endl;
    return 0;
}