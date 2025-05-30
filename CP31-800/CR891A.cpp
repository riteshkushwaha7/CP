#include <bits/stdc++.h>
using namespace std;

string solve() {
    int n;
    cin>>n;
    int cntodd = 0;
    bool even = false;
    for(int i = 0;i<n; i++){
        int temp; cin>>temp;
        if(temp%2) cntodd++;
        else even = true;
    }
    if(cntodd%2) return "NO";
    else return "YES";
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) cout<<solve()<<endl;
    return 0;
}
