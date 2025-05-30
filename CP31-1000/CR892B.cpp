#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> v(n);
        long long min_val = INT_MAX, k = 0, s = INT_MAX;

        for (int i = 0; i < n; i++) {
            int len; 
            cin >> len;
            v[i].resize(len);
            for (int j = 0; j < len; j++) cin >> v[i][j];
            sort(v[i].begin(), v[i].end());

            min_val = min(min_val, (long long)v[i][0]);
            if (v[i].size() > 1) {
                k += (long long)v[i][1];
                s = min(s, (long long)v[i][1]);
            }
        }
        cout << min_val + k - s << endl;
    }
    return 0;
}
