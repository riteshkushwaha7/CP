#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    string fun(){
        int n;
        cin>>n;
        vector<int> a(n*3);
        for(int i = 0; i<a.size(); i++){
            cin>>a[i];
        }
        int x=0,y=0,z=0;
        for(int i = 0;i<a.size(); i+=3){
            x+=a[i];
            y+=a[i+1];
            z+=a[i+2];
        }
        if (x == 0 && y == 0 && z == 0) return "YES";
        else return "NO";
    }
};

int main() {
    Solution sol;
    cout << sol.fun() << endl;
    return 0;
}
