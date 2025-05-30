#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void digital() {
        long long x,y;
        cin>>x>>y;
        if(y==9) cout<<x*y;
        else{
            --x;
            cout<<x*9 + y;
        }
    }
};

int main() {
    int t;
    cin>>t;
    Solution sol;
    while(t--){
        sol.digital();
        cout<<endl;
    }
    return 0;
}
