#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    for(int i = 0; i<n; i++){
        --a[i];
        if(abs(a[i]-i)>1) {
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }

    return 0;
}
