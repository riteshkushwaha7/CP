#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n), b(n);
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;

        // Sort both arrays a and b
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        // Merge arrays a and b into P, and remove duplicates
        vector<long long> P;
        P.reserve(2 * n);
        for (auto x : a) P.push_back(x);
        for (auto x : b) P.push_back(x);
        sort(P.begin(), P.end());
        P.erase(unique(P.begin(), P.end()), P.end());

        long long max_earn = 0;

        // Iterate over each possible price point in P
        for (auto P_val : P) {
            // Find the index of the first element >= P_val in both a and b using lower_bound
            int lb_a = lower_bound(a.begin(), a.end(), P_val) - a.begin();
            int lb_b = lower_bound(b.begin(), b.end(), P_val) - b.begin();

            // Calculate the difference in positions of the first element >= P_val in a and b
            long long D = (long long)(lb_a) - (long long)(lb_b);

            // If the difference D is <= k, we can consider this price point
            if (D <= k) {
                // Calculate the number of buyers who can afford this price (buyers are those >= P_val)
                long long buyers = n - lb_b;

                // Calculate the earnings for this price point
                long long earn = P_val * buyers;

                // Update the maximum earnings
                if (earn > max_earn) max_earn = earn;
            }
        }

        // Output the result for the current test case
        cout << max_earn << "\n";
    }

    return 0;
}
