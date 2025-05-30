#include <bits/stdc++.h>
using namespace std;

string fun() {
    string s;
    cin>>s;
    s.pop_back(), s.pop_back();
    s+='i';
    return s;
}

int main () {

    int T; 
    cin >> T; 
    while (T--) {
        cout<<fun()<<endl; 
    }
    return 0;
}