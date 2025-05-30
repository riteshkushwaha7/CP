#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

    int operations(int l, int r) {
        int operation = 0;
        vector<int> nums;
        vector<bool> used(r - l + 1, false);

        // Fill the vector with values from l to r
        for (int i = l; i <= r; i++) {
            nums.push_back(i);
        }

        // Iterate through the possible combinations of three elements
        for (size_t i = 0; i < nums.size(); i++) {
            if (used[i]) continue;
            for (size_t j = i + 1; j < nums.size(); j++) {
                if (used[j]) continue;
                for (size_t k = j + 1; k < nums.size(); k++) {
                    if (used[k]) continue;
                    if (gcd(nums[i], nums[j]) == 1 &&
                        gcd(nums[j], nums[k]) == 1 &&
                        gcd(nums[i], nums[k]) == 1) {
                        operation++;
                        // Mark these elements as used
                        used[i] = true;
                        used[j] = true;
                        used[k] = true;
                        break; // Exit after finding a valid triplet
                    }
                }
            }
        }
        return operation;
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    for (int i = 0; i < t; i++) {
        int x, y;
        cin >> x >> y;
        cout << sol.operations(x, y) << endl;
    }

    return 0;
}
