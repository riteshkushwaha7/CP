#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int equal(int n, vector<int> vec) {
        int maxValue = *max_element(vec.begin(), vec.end());
        vector<int> count(maxValue + 1, 0);
        for (int i = 0; i < n; i++) {
            count[vec[i]]++;
        }
        int maxCount = 0;
        for (int i = 0; i <= maxValue; i++) {
            if (count[i] > maxCount)
                maxCount = count[i];
        }
        return n - maxCount;
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int j = 0; j < n; j++) {
            cin >> vec[j];
        }
        cout << sol.equal(n, vec) << endl;
    }

    return 0;
}
