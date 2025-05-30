#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int problems(int n, int m, string problem) {
        vector<int> temp(7,0);
        for(int i =0; i<n; i++){
            temp[problem[i]-'A']++;
        }
        int ans =0;
        for(int i =0; i<7; i++){
            if(temp[i]!=m && temp[i]<m)
            ans+= (m-temp[i]);
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    for (int i = 0; i < t; i++) {
        int n,m;
        cin >> n >> m;
        string problem;
        cin>>problem;
        cout << sol.problems(n,m,problem) << endl;
    }

    return 0;
}
