#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void unstable() {
        int x,y;
        cin>>x>>y;
        if(x==1) cout<<0<<endl;
        else if(x==2) cout<<y<<endl;
        else cout<<2*y<<endl;
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    while (t--) {
        sol.unstable();
    }

    return 0;
}