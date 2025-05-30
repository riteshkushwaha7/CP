#include <bits/stdc++.h>
using namespace std;

string fun() {
    int a, b;
    cin>>a>>b;
    int d = a-b+1;
    if(d >= 0 && d%9==0) return "YES";
    else return "NO";
}

int main () {

    int T; 
    cin >> T; 
    while (T--) {
        cout<<fun()<<endl; 
    }
    return 0;
}