#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++) cin >> v[i].first;
        for (int i = 0; i < n; i++) cin >> v[i].second;

        sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
            return a.second < b.second;
        });

        long long ans = k;
        int s = n-1, i = 0; 
        while (i < n && s) {
            if(v[i].second>=k){
                ans+=(long long)s*k;
                s=0;
            }
            else if (s >= v[i].first) {
                s -= v[i].first;
                ans += (long long)v[i].first * v[i].second;
            } else {
                ans += (long long)s * v[i].second;
                s = 0;
            }
            i++;
        }
        cout << ans << endl;
    }
    return 0;
}
