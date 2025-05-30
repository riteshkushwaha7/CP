#include <bits/stdc++.h>
using namespace std;

string fun() {
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    int b;
    for(int i = 0; i<n; i++) cin>>a[i];
    cin>>b;

    if(a[0]>a[1]){
        a[0]=b-a[0];
        if(a[0]>a[1]) return "NO";
    } 


    for(int i = 1; i<n-1; i++){
        if(a[i]>a[i+1]){
            a[i]=b-a[i];
            if(a[i]<=a[i+1] && a[i]>=a[i-1]) continue;
            else return "NO";
        }
    }
    return "YES";
}

int main () {

    int T; 
    cin >> T; 
    while (T--) {
        cout<<fun()<<endl; 
    }
    return 0;
}