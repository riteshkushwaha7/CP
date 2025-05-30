#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int seconds(string s, string t) {
        int a = s.size();
        int b = t.size();

        string common;
        for(int i = 0; i<min(a,b); i++){
            if(s[i]==t[i]){
                common.push_back(s[i]);
            }
            else break;
        }
        int c = common.size();
        int d = a-c;
        int e = b-c;
        if(c) c+=1;

        return c+d+e;
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    while (t--) {
        string s,t;
        cin>>s>>t;
        cout << sol.seconds(s,t) << endl;
    }

    return 0;
}
