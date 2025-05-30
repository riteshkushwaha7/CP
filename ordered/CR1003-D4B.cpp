#include <bits/stdc++.h>
using namespace std;

int fun() {
    string s;
    cin>>s;
    int cnt = 0;
    for(int i = 0; i<s.size()-1; i++){
        if(s[i]==s[i+1]) cnt++;
    }
    if(cnt) return 1;
    else return s.size();
}

int main () {

    int T; 
    cin >> T; 
    while (T--) {
        cout<<fun()<<endl; 
    }
    return 0;
}