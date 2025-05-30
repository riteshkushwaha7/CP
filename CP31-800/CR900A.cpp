#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0; i<n-1; i++){
        int temp;
        cin>>temp; sum+=temp;
    }
    return -1*sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        cout << solve() << endl;
    }
    return 0;
}
