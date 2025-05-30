#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<char, int> a, b;
        vector<int> c(n), d(n);
        for (int i = 0; i < n; i++) {
            a[s[i]]++;
            c[i] = a.size();
        }
        for (int i = n - 1; i >= 0; i--) {
            b[s[i]]++;
            d[i] = b.size();
        }
        long long maxi = 0;
        for (int i = 0; i < n - 1; i++) {
            maxi = max(maxi, (long long)c[i] + d[i + 1]);
        }
        cout << maxi << endl;
    }
    return 0;
}
