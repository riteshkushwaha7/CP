#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> balarray(int n) {
        if ((n / 2) % 2 != 0) {
            cout << "NO\n";
            return {};
        }

        vector<int> arr(n);
        int half = n / 2;
        int odd=0,even=0;

        for (int i = 0; i < half; i++) {
            arr[i] = 2 * (i + 1);
            even+=2*(i+1);
        }

        for (int i = half; i < n - 1; i++) {
            arr[i] = 2 * (i - half) + 1;
            odd+=2 * (i - half) + 1;
        }

        arr[n - 1] = even-odd;

        cout << "YES\n";
        return arr;
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    while (t--) {
        int n;
        cin >> n;

        vector<int> result = sol.balarray(n);
        if (!result.empty()) {
            for (int num : result) {
                cout << num << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
