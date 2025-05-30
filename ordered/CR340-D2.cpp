#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int domino() {
        int a,b;
        cin>>a>>b;
        return (a*b)/2;

    }
};

int main() {

    Solution sol;

    cout<<sol.domino()<<endl;
    
    return 0;
}
