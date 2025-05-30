#include <iostream>
using namespace std;

class Solution {
public:
    int size(int l, int r) {
        if (l == r) return 1; // If l and r are the same, only one element

        int count = 0;
        int current = l;
        int step = 1;

        while (current <= r) {
            count++;
            current += step;
            step++;
        }

        return count;
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    for (int i = 0; i < t; i++) {
        int l, r;
        cin >> l >> r;
        cout << sol.size(l, r) << endl;
    }

    return 0;
}
