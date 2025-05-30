#include <bits/stdc++.h>
using namespace std;

string fun() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        long long k;
        cin >> k;
        
        if (k <= 2 * max(n - i, i - 1)) {
            return "NO";
        }
    }
    
    return "YES";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;

    while (t--) {
        cout << fun() << '\n';
    }

    return 0;
}
