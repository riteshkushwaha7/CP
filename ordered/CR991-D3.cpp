#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fun() {
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        for(int i = 0; i<n; i++){
            string temp;
            cin>>temp;
            a[i]=temp.size();
        }
        int cnt = 0;
        for(int i = 0; i<n;i++){
            if(m>=a[i]){
                cnt++;
                m-=a[i];
            } else break;
        }
        return cnt;
    }
};

int main() {
    int t;
    cin>>t;
  
    Solution sol;
  while(--t){
cout << sol.fun() << endl;
  }
    cout << sol.fun() << endl;
    return 0;
}
