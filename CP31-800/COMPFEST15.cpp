#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    int absval = INT_MAX;
    int ans;
    for(int i = 0; i<n; i++){
        int temp; cin>>temp;
        absval = min(abs(temp),absval);
    }
    return absval;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << solve() << '\n';
    return 0;
}
