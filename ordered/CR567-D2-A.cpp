#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void drinks() {
        long long x,y,z;
        cin>>x>>y>>z;
        if( x%z == 0 || y%z == 0 ){
            cout<<(x+y)/z<<" "<<0;
        }else{
            if(x/z + y/z == (x+y)/z) cout<<(x+y)/z<<" "<<0;
            else{
                cout<<(x+y)/z<<" "<<z-max(x%z,y%z);
            }
        }
    }
};

int main() {
    Solution sol;
    sol.drinks();
    return 0;
}
