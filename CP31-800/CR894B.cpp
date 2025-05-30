#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n),a;
    for(int i = 0; i<n; i++) cin>>v[i];
    a.push_back(v[0]);
    for(int i = 1; i<n; i++){
        if(v[i]>=v[i-1]){
            a.push_back(v[i]);
        }else{
            a.push_back(v[i]);
            a.push_back(v[i]);
        }
    }
    cout<<a.size()<<endl;
    for(int i = 0; i<a.size(); i++) cout<<a[i]<<" ";
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){solve();}
    return 0;
}
