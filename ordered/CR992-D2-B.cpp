#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int strip() {
        int n;
        cin>>n;
        if(n<=2) return n;
        int cnt = 0;
        
        while(n!=1){
            cnt++;
            n/=2;
            
            if(n%2 == 1) cnt++;
        }
        return cnt;
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    while (t--) {
        cout<<sol.strip();
        cout<<endl;
    }

    return 0;
}