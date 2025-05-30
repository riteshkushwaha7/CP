#include <bits/stdc++.h>
using namespace std;

bool solve(int n, vector<int> v) {
    for (int i = 0; i < n; i++) v[i] = abs(v[i]);

    int a = v[0];
    sort(v.begin(), v.end());
    int med = n / 2;  

    return a <= v[med];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        bool normal = solve(n, v);

        v[0] *= -1;
        bool flipped = solve(n, v);

        if (normal || flipped)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
