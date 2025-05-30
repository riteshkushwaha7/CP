#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evenarray() {
        int n;
        cin >> n;
        vector<int> array(n);
        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }

        int even = 0; 
        int odd = 0;  

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0 && array[i] % 2 != 0) {
                odd++;
            } else if (i % 2 != 0 && array[i] % 2 == 0) {
                even++;
            }
        }

        if (even != odd) {
            return -1; 
        }
        return even; 
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    while (t--) {
        cout << sol.evenarray() << endl;
    }

    return 0;
}
