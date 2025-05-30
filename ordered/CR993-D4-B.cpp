#include <bits/stdc++.h>
using namespace std;

string fun(){
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    for(int i = 0; i<s.size(); i++){
        if(s[i]=='p') s[i] = 'q';
        else if(s[i]=='q') s[i]='p';
    }
    return s;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        cout << fun() << endl;
    }
    return 0;
}
