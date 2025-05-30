#include <bits/stdc++.h>
using namespace std;

string fun(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    
    if(a % 2 == 0 && b % 2 == 0 && c % 2 == 0 && d % 2 == 0) return "YES";
    else if(a == b && b == c && c == d) return "YES";

    int cnt = 0;
    if(a % 2 == 1) cnt++;
    if(b % 2 == 1) cnt++;
    if(c % 2 == 1) cnt++;
    if(d % 2 == 1) cnt++;

    if(cnt == 1 || cnt == 0) return "YES";

    if(a > 0 && b > 0 && c > 0) {
        a--; b--; c--; d += 3;
    }
    
    cnt = 0;
    if(a % 2 == 1) cnt++;
    if(b % 2 == 1) cnt++;
    if(c % 2 == 1) cnt++;
    if(d % 2 == 1) cnt++;

    if(cnt == 1 || cnt == 0) return "YES";
    
    return "NO"; 
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
