#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void fun() {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long even = 0, odd = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) 
                even += a[i];
            else 
                odd += a[i];
        }
        long long even_loc = (n + 1) / 2; 
        long long odd_loc = n / 2;       
        
        if ( odd % odd_loc == 0 && even % even_loc == 0 && odd / odd_loc == even / even_loc) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    while (t--) {
        sol.fun();
    }

    return 0;
}
