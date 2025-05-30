#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool check(int &num, int sum) {
        num = 1; 
        while (num * num <= sum) {
            if (num * num == sum) {
                return true;
            }
            num += 2; 
        }
        return false;
    }

    int square() {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int days = 0;
        int sum = 0;
        int num = 1;

        for (int i = 0; i < n; i++) {
            sum += arr[i];
            if (check(num, sum)) {
                days++;
            }
        }

        return days;
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    while (t--) {
        cout << sol.square() << endl;
    }
    return 0;
}
