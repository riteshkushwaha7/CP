#include <iostream>
using namespace std;

class Solution {
public:
    long long gcd(long long a, long long b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    long long lcm(long long a, long long b) {
        return (a / gcd(a, b)) * b;
    }

    pair<long long, long long> output(long long l, long long r) {
        for (long long start = l; start <= r; start++) {
            for (long long end = start + 1; end <= r; end++) {
                if (lcm(start, end) <= r) return {start, end};
            }
        }
        return {-1, -1};
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;
    while (t--) {
        long long l, r;
        cin >> l >> r;
        pair<long long, long long> result = sol.output(l, r);
        cout << result.first << " " << result.second << endl;
    }
    return 0;
}
