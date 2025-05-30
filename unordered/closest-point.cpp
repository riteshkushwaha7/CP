#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string possibility(int n, vector<int> vec) {
        int total=0;
        for(int i=0; i<n; i++){
            total+=vec[i];
        }
        int avg = total/n;
        for(int i = 0; i<n; i++){
            if(vec[i]==avg)
            return "NO";
        }
        return "YES";
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int j = 0; j < n; j++) {
            cin >> vec[j];
        }
        cout << sol.possibility(n, vec) << endl;
    }

    return 0;
}
