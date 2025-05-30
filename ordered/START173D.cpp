#include <bits/stdc++.h>
using namespace std;
#define forr(i, n) for (int i = 0; i < n; i++)

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    forr(i, n) cin >> a[i];
    forr(i, m) cin >> b[i];

    int pos = min_element(b.begin(), b.end()) - b.begin();
    
    vector<int> ans = a;

    for (int i = 0; i <= n - m; i++) {
        bool check = false;
        
        forr(j, m) {
            if(ans[i + j] < b[(j + pos) % m]) break;
            if(ans[i + j] > b[(j + pos) % m]) {
                check = true;
                break;
            }
        }
        
        if (check) {
            forr(j, m) {
                ans[i + j] = b[(j + pos) % m];
            }
        }
    }

    forr(i, n) {
        cout << ans[i];
        if (i == n - 1) {
            cout << endl;  
        } else {
            cout << ' ';   
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
