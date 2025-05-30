#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n;
    cin>>n;
    vector<int> a(51);
    for(int i = 0; i<n; i++){
        int temp;
        cin>>temp;
        a[temp]++;
    }
    int cnt = 0;
    for(int i = 1; i<51; i++){
        cnt = max(cnt,a[i]);
    }
    return n-cnt;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout<<solve();
        cout << endl;
    }

    return 0;
}
