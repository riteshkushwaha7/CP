#include <iostream>
using namespace std;

class Solution {
public:
    string equalsum(int a, int b) {
        int total = a + 2 * b;
        if (total % 2 != 0) return "NO"; // If total sum is odd, return NO

        int target = total / 2;
        if (target <= a + 2 * min(b, target/2)) return "YES";
        else return "NO";
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        cout << sol.equalsum(a, b) << endl;
    }

    return 0;
}
