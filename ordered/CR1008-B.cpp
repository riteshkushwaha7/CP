#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    for(int i = 1; i<=n; i++){
        if(k%2==1){
            if(i!=n) cout<<n<<" ";
            else cout<<n-1;
        }if(k%2==0){
            if(i!=n-1) cout<<n-1<<" ";
            else cout<<n<<" ";
        }
    }
    cout<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
