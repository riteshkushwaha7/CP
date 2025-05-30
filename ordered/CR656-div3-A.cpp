// A. Required Remainder


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximums() {
        int x, y, n;
        cin >> x >> y >> n;
        
        int k = (n / x) * x + y;
        
        if (k > n) {
            k -= x;
        }
        
        return k;
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    while (t--) {
        cout << sol.maximums() << endl;
    }
    return 0;
}
