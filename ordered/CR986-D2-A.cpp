#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int x = 0, y = 0;

        for (int i = 0; i < n*100; i++) {
            if (x == a && y == b) {
                cout << "YES";
                return;
            }

            if (s[i%n] == 'N') y++;
            else if (s[i%n] == 'E') x++;
            else if (s[i%n] == 'S') y--;
            else x--;
        }
    cout << "NO";
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}
