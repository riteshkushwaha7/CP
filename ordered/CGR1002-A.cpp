#include <bits/stdc++.h>
using namespace std;

string fun() {
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    for(int i = 0; i<n; i++) cin>>b[i];
    unordered_map<int,int>one,two;
    for(int i = 0; i<n; i++){
        one[a[i]]++;
        two[b[i]]++;
    }
    if(one.size()+two.size()>3) return "YES";
    else return "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;

    while (t--) {
        cout<<fun() << '\n';
    }

    return 0;
}
