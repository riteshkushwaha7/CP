#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;  

    while (t--) {
        long long n, d;
        cin >> n >> d;
        vector<int> ans;
        ans.push_back(1); 

        for (long long i = 3; i <= 9; i += 2) { 
            long long r = 1, num = d;
            bool f = true;

            while (num % i) {
                num *= 10;
                num += d;
                num %= i;
                r++;
                if (r >= i + 1) {
                    f = false;
                    break;
                }
            }

            if (!f) continue;

            if (n >= r) {
                ans.push_back(i); 
            } else {
                long long val = 1;
                for (long long j = 1; j <= n; j++) {
                    val *= j;
                }
                if (val % r == 0) {
                    ans.push_back(i);
                }
            }
        }

        for (int i : ans) {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main() {
    solve();
    return 0;
}
