#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    int ans = INT_MAX;
    bool found = false;

    for(int i = 0; i < n; i++){
        if(s[i] == t[0]){
            int j = i;
            int k = 0;
            int cnt = 0;

            while(k < m){
                if(s[j] == t[k]){
                    j++;
                    k++;
                    if(j == n){
                        cnt++;
                        j = 0;
                    }
                } else {
                    break;
                }
            }

            if(k == m){
                if(j != 0) cnt++; 
                ans = min(ans, cnt);
                found = true;
            }
        }
    }

    if(found) return ceil(log2(ans));
    else return -1;
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
