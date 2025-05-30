#include <iostream>
#include <vector>
using namespace std;

template<typename T>
using vec = vector<T>;

void solve() {
    int n;
    cin >> n;

    vec<vec<int>> G(n, vec<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> G[i][j];
        }
    }

    vec<int> p(2 * n + 1, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int s = i + j + 2;
            if (!p[s]) p[s] = G[i][j];
        }
    }

    vec<bool> used(2 * n + 1, false);
    for (int s = 2; s <= 2 * n; s++) {
        used[p[s]] = true;
    }

    int missing = 0;
    for (int num = 1; num <= 2 * n; num++) {
        if (!used[num]) {
            missing = num;
            break;
        }
    }

    p[1] = missing;
    for (int i = 1; i <= 2 * n; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
