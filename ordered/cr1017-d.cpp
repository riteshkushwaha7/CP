#include <bits/stdc++.h>
using namespace std;

bool can_form(string &p, string &s) {
    int n = p.size(), m = s.size();
    // If s is shorter than p or longer than 2*p, it's impossible
    if (m < n || m > 2 * n) return false;
    
    // Use two pointers: i for p, j for s
    int i = 0, j = 0;
    while (i < n && j < m) {
        // Current characters must match
        if (p[i] != s[j]) return false;
        
        // Count consecutive occurrences in s
        int count = 0;
        while (j < m && s[j] == p[i]) {
            count++;
            j++;
        }
        // Each hit in p must produce 1 or 2 sounds in s
        if (count != 1 && count != 2) return false;
        i++;
    }
    
    // Check if we processed all characters
    return i == n && j == m;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        string p, s;
        cin >> p >> s;
        cout << (can_form(p, s) ? "YES" : "NO") << '\n';
    }
    
    return 0;
}