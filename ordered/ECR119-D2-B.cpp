#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maxbase(vector<long long> nums) {
        long long mini = LLONG_MAX, maxi = LLONG_MIN; 
        for (long long i = 0; i < nums.size(); i++) {
            mini = min(mini, nums[i]);
            maxi = max(maxi, nums[i]);
        }
        return maxi - mini;
    }

    long long cp() {
        long long x, y;
        cin >> x >> y;

        long long k1;
        cin >> k1;
        vector<long long> left(k1);
        for (long long i = 0; i < k1; i++)
            cin >> left[i];

        long long k2;
        cin >> k2;
        vector<long long> right(k2);
        for (long long i = 0; i < k2; i++)
            cin >> right[i];

        long long k3;
        cin >> k3;
        vector<long long> down(k3);
        for (long long i = 0; i < k3; i++)
            cin >> down[i];

        long long k4;
        cin >> k4;
        vector<long long> up(k4);
        for (long long i = 0; i < k4; i++)
            cin >> up[i];

        long long l, r, u, d;
        l = maxbase(left);
        r = maxbase(right);
        u = maxbase(up);
        d = maxbase(down);

        long long maxarea = 0;
        maxarea = max(maxarea, max(l, r) * y); 
        maxarea = max(maxarea, max(u, d) * x); 

        return maxarea;
    }
};

int main() {
    long long t;
    cin >> t;

    Solution sol;
    while (t--) {
        cout << sol.cp() << endl;
    }
    return 0;
}
