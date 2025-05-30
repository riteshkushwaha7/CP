#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if(n%2==0){
        cout<<-1<<" "<<endl;
        return;
    }
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        int idx = (i*2)%n;
        a[idx] = i+1;
    }
    
    for (int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
        }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
