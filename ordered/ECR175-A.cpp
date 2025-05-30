#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n;
    cin >> n;
    int r = n / 15;
    
    if (n >= 15 * r + 2) 
        return 3 * (r + 1);
    else {
        if (n == r * 15 + 1) 
            return 3 * r + 2;
        else 
            return 3 * r + 1;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl; 
    }
    return 0;
}
