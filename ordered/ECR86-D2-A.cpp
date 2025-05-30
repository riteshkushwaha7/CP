#include <bits/stdc++.h>
using namespace std;

int fun(){
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    int p = a*(max(x,y)-min(x,y));
    int q = b*min(x,y);
    return p+q;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout<<fun()<<endl;
    }
    return 0;
}
