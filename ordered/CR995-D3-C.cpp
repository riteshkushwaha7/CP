#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check(int x,int y, int a, int b){
    int sum = a+b, diff = a-b;
    return (sum%x==0 && diff%y==0);
}

int solve(){
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> v(n);
    for(int i = 0; i<n; i++) cin>>v[i];
    int cnt = 0;
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(check(x,y,v[i],v[j])) cnt++;
        }
    }
    return cnt;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t;
    
    while (t--) {
        cout<<solve()<<endl;
    }
    return 0;
}
