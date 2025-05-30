#include <bits/stdc++.h>
using namespace std;

int solve(){
    int points = 0;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            char c; cin >> c;
            if (c == 'X') {
                int ring = min({i, j, 9 - i, 9 - j});
                points += ring + 1;
            }
        }
    }
    return points;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        cout << solve() << '\n';
    }
    return 0;
}
