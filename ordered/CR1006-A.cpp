#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n,k,p;
    cin>>n>>k>>p;
    int q = abs(k)/p;
    int r = abs(k)%p;
    if(r) q++;
    if(q<=n) return q;
    else return -1;
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout<<solve()<<endl;
    }
    return 0;
}
