#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;
        int limit = sqrt(n);
        for (int i = 3; i <= limit; i += 2) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    
    vector<int> permutation() {
        int n;
        cin >> n;
        vector<int> a(n);
        iota(a.begin(), a.end(), 1); 
        
        for (int i = 0; i < n - 1; i++) {
            if (!isPrime(a[i] + a[i + 1])) {
                int k = i;
                while (k + 1 < n - 1 && !isPrime(a[k] + a[k + 1])) {
                    swap(a[k + 1], a[k + 2]);
                    k++;
                }
                if (!isPrime(a[i] + a[i + 1])) {
                    return {-1}; 
                }
            }
        }
        return a;
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    while (t--) {
        vector<int> result = sol.permutation();
        if (result.size() == 1 && result[0] == -1) {
            cout << -1 << endl;
        } else {
            for (int x : result) {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
