#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int shovel() {
        int k, r;
        cin >> k >> r;

        int cnt = 1;
        while (true) {
            int cost = k * cnt;
            if (cost % 10 == r || cost % 10 == 0) break;
            cnt++;
        }

        return cnt;
    }
};

int main() {
    Solution sol;
    cout << sol.shovel() << endl;
    return 0;
}
