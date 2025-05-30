#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string seating(vector<int>& a, int n) {
        vector<bool> seats(n + 1, false);  // To track occupied seats

        seats[a[0]] = true;  // First passenger can sit anywhere

        for (int i = 1; i < n; ++i) {
            int seat = a[i];
            bool can_sit = false;

            // Check left neighbor (seat - 1) if within bounds
            if (seat > 1 && seats[seat - 1]) {
                can_sit = true;
            }

            // Check right neighbor (seat + 1) if within bounds
            if (seat < n && seats[seat + 1]) {
                can_sit = true;
            }

            // If neither neighbor is occupied, the seating rule is violated
            if (!can_sit) {
                return "NO";
            }

            seats[seat] = true;  // Mark current seat as occupied
        }

        return "YES";
    }
};

int main() {
    int t;
    cin >> t;

    Solution sol;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << sol.seating(a, n) << endl;
    }

    return 0;
}
