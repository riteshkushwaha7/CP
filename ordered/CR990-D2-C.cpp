#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int cost(vector<vector<int>> &arr, int n) {
        int maximum = 0;
        int m = n;
        for (int i = 0; i < 2; i++) {
            int cost = 0;
            if (m == 0) break;
            for (int j = 0; j < m; j++) cost += arr[0][j];
            for (int j = m - 1; j < n; j++) cost += arr[1][j];
            m--;
            maximum = max(maximum, cost);
        }
        return maximum;
    }

    int maxcost() {
        int n;
        cin >> n;
        int maximum = 0;

        vector<vector<int>> arr(2, vector<int>(n));

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }

        maximum = cost(arr, n); 

        for (int i = 1; i < n; i++) {
            swap(arr[0][i - 1], arr[0][i]);
            swap(arr[1][i - 1], arr[1][i]);
            maximum = max(maximum, cost(arr, n));
        }

        return maximum;
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    while (t--) {
        cout << sol.maxcost() << endl;
    }
    return 0;
}
