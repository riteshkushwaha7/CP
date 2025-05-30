#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int greedy() {
        int n, k;
        cin >> n >> k;
        
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        sort(arr.rbegin(), arr.rend());
        
        int i = 0;
        while (i < n && arr[i] <= k) {
            k -= arr[i];
            i++;
        }

        return k;
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    while (t--) {
        cout << sol.greedy() << endl;
    }
    return 0;
}
