#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n),a,b;
    int maxi = INT_MIN;
    for(int i = 0; i<n; i++){
        cin>>v[i];
        maxi = max(maxi,v[i]);
    }
    for(int i = 0; i<n; i++){
        if(v[i]== maxi) b.push_back(v[i]);
        else a.push_back(v[i]);
    }
    if(a.size() && b.size()){
        for(int i = 0; i<a.size(); i++) cout<<a[i]<<" ";
        cout<<endl;
        for(int i = 0; i<b.size(); i++) cout<<b[i]<<" ";
        cout<<endl;
    }else{
        cout<<-1<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
