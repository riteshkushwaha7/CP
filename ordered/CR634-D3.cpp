#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int candies() {
        int a;
        cin>>a;
        if(a==1 || a ==2) return 0;
        else if(a%2==0) return a/2-1;
        else return a/2;
    }
};

int main() {
    int t;
    cin>>t;
    Solution sol;
    while(t--){
        cout<<sol.candies()<<endl;
    }
     
    return 0;
}
