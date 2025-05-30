#include <bits/stdc++.h>
using namespace std;

void solve() {

        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i <n; i++) cin>>a[i];

        bool s = false;
        for(int i = 1; i<n; i++){
            long long p = a[i-1]*2;
            long long q = a[i]*2;


            if(p>a[i] && q>a[i-1]) s = s || true;
        }
        if(s) cout<<"YES";
        else cout<<"NO";

}        

int main() {
    int t;
    cin>>t;
    while(t--){
    solve();
    cout<<endl;
    }

    return 0;
}
