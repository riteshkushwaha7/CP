#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fun() {
        int n;
        cin>>n;
        vector<int> a(20,0);
        for(int i = 0; i<n; i++){
            int temp;
            cin>>temp;
            a[temp-1]++;
        }
        int cnt = 0;
        // sort(a.begin(),a.end());
        for(int i = 0; i<20; i++){
            cnt+=a[i]/2;
            // if(a[i]==1 || a[i]==0) break;
        }
        return cnt;

    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    while (t--) {
        cout << sol.fun() << endl;
    }

    return 0;
}
