#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int fun(){
        int n;
        cin>>n;
        if(((n/2+1)/2)-1 <1 || n%2==1) return 0;
        return ((n/2+1)/2)-1;
    }
};

int main() {
    Solution sol;
    cout << sol.fun() << endl;
    return 0;
}
