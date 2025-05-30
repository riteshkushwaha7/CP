#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int divisibility() {
        int a,b;
        cin>>a>>b;
        if(a%b==0) return 0;
        else return b-a%b;
    }
};

int main() {
    int t;
    cin>>t;
    Solution sol;
    while(t--){
        cout<<sol.divisibility()<<endl;
    }
     
    return 0;
}
