#include <bits/stdc++.h>
using namespace std;

int mex(const set<int>& s) {
    int mex = 0;
    while (s.find(mex) != s.end()) {
        ++mex;
    }
    return mex;
}

vector<int> assignValues(int n, int x, int y) {
    vector<int> a(n, -1);
    vector<set<int>> b(n);

    for (int i = 0; i < n; ++i) {
        b[i].insert((i + 1) % n);
        b[i].insert((i - 1 + n) % n);
    }

    x--; y--;
    b[x].insert(y);
    b[y].insert(x);

    for (int i = 0; i < n; ++i) {
        set<int> values;
        for (int idx : b[i]) {
            if (a[idx] != -1) {
                values.insert(a[idx]);
            }
        }
        a[i] = mex(values);
    }

    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> result = assignValues(n, x, y);
        for (int value : result) {
            cout << value << " ";
        }
        cout << "\n";
    }

    return 0;
}
