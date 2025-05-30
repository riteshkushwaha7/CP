#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        int len = n.length();
        double minCost = numeric_limits<double>::max();
        int minRemoved = len;

        // Try all contiguous substrings
        for (int i = 0; i < len; ++i) {
            long long num = 0;
            int digitSum = 0;
            for (int j = i; j < len; ++j) {
                int digit = n[j] - '0';
                num = num * 10 + digit;
                digitSum += digit;

                if (digitSum == 0) continue; // skip invalid
                double cost = (double)num / digitSum;
                int removed = len - (j - i + 1);

                if (cost < minCost || (abs(cost - minCost) < 1e-9 && removed < minRemoved)) {
                    minCost = cost;
                    minRemoved = removed;
                }
            }
        }
        cout << minRemoved << '\n';
    }
    return 0;
}
