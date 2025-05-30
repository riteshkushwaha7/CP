#include <bits/stdc++.h>
using namespace std;

int fun(){
    int m,a,b,c;
    cin>>m>>a>>b>>c;
    if(m>=a) a = a;
    else a = m;

    int rem1 = m-a;

    if(m>=b) b = b;
    else b = m;

    int rem2= m-b;

    if(c>= rem1+rem2) c= rem1+rem2;

    return c+a+b;
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
