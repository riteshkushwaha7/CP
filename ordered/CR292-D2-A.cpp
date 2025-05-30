#include <bits/stdc++.h>
using namespace std;



int main()
{
    long long x,y,s;
    cin>>x>>y>>s;
    x = abs(x), y = abs(y);
    if((x+y)==0 && s%2 == 0) cout<<"YES"<<endl;
    else if((x+y)==0 && s%2 == 1) cout<<"NO"<<endl;
    else if((x+y) <= s &&(s%(x+y)==0 || s%(x+y)%2==0)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
	return 0;
}

