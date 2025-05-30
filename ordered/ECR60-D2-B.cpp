#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void emotes() {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.rbegin(), a.rend());
        long long ans = 0;

        int div = m/(k+1);
        int rem = m%(k+1);

        ans += (long long) div*a[0]*k;
        ans += (long long) div*a[1];
        if(rem>0) ans+= (long long) rem*a[0];

        cout << ans << endl;
    }
};

int main() {
    Solution sol;
    sol.emotes();
    return 0;
}
