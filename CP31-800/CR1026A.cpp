#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++) cin>>v[i];
    sort(v.begin(),v.end());
    if((v[0]+v[n-1])%2==0) return 0;
    int cnt = 0;
    for(int i = 0; i<n-1; i++){
        if((v[i]+v[n-1])%2!=0) cnt++;
        else break;
    }
    int cnt2 = 0;
    for(int i = n-1; i>=1; i--){
        if((v[0]+v[i])%2!=0) cnt2++;
        else break;
    }
    return min(cnt,cnt2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) cout<<solve()<<endl;
    return 0;
}
