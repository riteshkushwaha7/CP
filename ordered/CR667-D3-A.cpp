#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int TWOINT() {
        int a,b;
        cin>>a>>b;
        int x = abs(a-b);
        int y = x/10;
        int z = 0;
        if(x%10) z=1;
        return y+z;
    }
};

int main() {
    int t;
    cin>>t;
    Solution sol;
    while(t--){
        cout<<sol.TWOINT()<<endl;
    }
     
    return 0;
}
