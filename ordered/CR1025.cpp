#include <bits/stdc++.h>
using namespace std;

string solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    bool hasZero = false;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] == 0) hasZero = true;
    }

    if(!hasZero) return "YES";

    for(int i = 1; i < n; i++) {
        if(v[i] == 0 && v[i-1] == 0) return "YES";
    }

    return "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        cout << solve() << "\n";
    }
    return 0;
}
