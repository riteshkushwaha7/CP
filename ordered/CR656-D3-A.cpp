#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void pairwise() {
        int x,y,z;
        cin>>x>>y>>z;
        if(x==y && y==z){
            cout<<"YES\n"<<x<<" "<<y<<" "<<z<<endl;
        }else if(x == y || y == z || x == z){
            if(x==y && z<x) cout<<"YES\n"<<z<<" "<<x<<" "<<z<<endl;
            else if(z==y && x<y) cout<<"YES\n"<<x<<" "<<x<<" "<<y<<endl;
            else if(x==z && y<z) cout<<"YES\n"<<x<<" "<<y<<" "<<y<<endl;
            else cout<<"NO"<<endl;
        } 
        else{
            cout<<"NO"<<endl;
        }
        return;
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    while (t--) {
        sol.pairwise();
    }

    return 0;
}