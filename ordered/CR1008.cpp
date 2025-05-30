#include <bits/stdc++.h>
using namespace std;
#define ll long long


string solve() {
    int n,x;
    cin>>n>>x;
    int val = n*x;
    int sum = 0;
    for(int i = 0; i<n; i++){
        int temp;
        cin>>temp;
        sum+=temp;
    }
    if(sum==val) return "YES";
    else return "NO";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout<<solve()<<endl;
    }
    return 0;
}
