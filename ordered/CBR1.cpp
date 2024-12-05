#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long fun() {
        long long n, m, a;
        cin >> n >> m >> a;

        
        long long length = (n + a - 1) / a; 
        long long width = (m + a - 1) / a;  

        return length * width;
    }
};

int main() {
    Solution sol;
    cout << sol.fun() << endl;
    return 0;
}
