#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    string s = to_string(n);
    
    for (int i = 0; i < s.size(); i++) {
        int digit = s[i] - '0';
        if (i == 0 && digit == 9) continue; // Don't change leading 9
        if (digit >= 5) {
            digit = 9 - digit;
            s[i] = digit + '0';
        }
    }

    cout << stoll(s) << endl;
}

int main() {
    fastio();
    solve();
    return 0;
}
