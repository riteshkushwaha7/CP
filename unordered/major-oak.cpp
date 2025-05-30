#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string evenodd(int n, int k) {
        
        int startYear = max(1, n - k + 1);
        int endYear = n;
        
        
        long long sum = (long long)(endYear - startYear + 1) * (startYear + endYear) / 2;
        
        
        return (sum % 2 == 0) ? "YES" : "NO";
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << sol.evenodd(n, k) << endl;
    }

    return 0;
}
