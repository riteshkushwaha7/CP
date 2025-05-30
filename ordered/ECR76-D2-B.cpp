#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string cp() {
        int x,y;
        cin>>x>>y;
        if(y<=x) return "YES";
        else if(x == 2 && y == 3) return "YES";
        else if(x<=3) return "NO";
        else return "YES";
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;
    while (t--) {
        cout<<sol.cp();
        cout << endl;
    }
    return 0;
}
