#include <bits/stdc++.h>
using namespace std;

long long fun() {
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for(int i = 0; i<n ;i++) cin>>a[i];
    for(int i = 0; i<n ;i++) cin>>b[i];
    int ans = 0;
    for(int i = 0; i<n-1; i++){
        if(a[i]>b[i+1]) ans+=(a[i]-b[i+1]);
    }
    ans+=a[n-1];
    return ans;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        cout<<fun()<<endl;
    }
    return 0;
}
