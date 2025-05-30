#include <iostream>
using namespace std;

void solve() {
    int x;
    cin >> x;
    int p = 1;

    while (p * 2 < x) {
        p *= 2;
    }

    int y = p - 1;

    int z = x ^ y;
    if (x + y > z && x + z > y && y + z > x) {
        cout << y << endl;
    } else {
        cout << -1 << endl;
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
