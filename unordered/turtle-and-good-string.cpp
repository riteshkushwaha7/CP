#include <iostream>
using namespace std;

class Solution {
public:
    string goodstring(int n, string s) { 
        if (n >= 2 && s[0] != s[n-1]) {
            return "YES";
        } else {
            return "NO";
        }
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        string s;
        cin >> s; 

        cout << sol.goodstring(n, s) << endl;
    }

    return 0;
}
