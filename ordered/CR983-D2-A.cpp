#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int max = 0;
    for(int i = 0; i<2*n; i++){
        int temp;
        cin>>temp;
        if(temp == 1) max++;
    }
    int extra = 0;
    int min = max%2;
    if(max>n){
        cout<<min<<" "<<2*n-max;
        return;
    }
    cout<<min<<" "<<max;
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
