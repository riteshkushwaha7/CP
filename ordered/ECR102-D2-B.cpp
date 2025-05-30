#include <bits/stdc++.h>
using namespace std;

string fun(){
    string a,b;
    cin>>a>>b;
    if(a==b) return a;

    int x = a.size(), y = b.size();
    if(x>y && x%y == 0){
        if(b*(x/y)==a) return a;
    }else if(y>x && y%x == 0){
        if(a*(y/x)==b) return b;
    }

    string rem;

    for(int i = 0; i<max(x,y); i++){
        if(a[i])
    } 
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
        cout << fun() << endl;
    }
    return 0;
}
