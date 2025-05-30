#include <bits/stdc++.h>
using namespace std;
 
long long solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n<3) return 0;
    int a = 0, b = 0;
    for (int i = 0; i<n; i++) {
        if (s[i] == '_') a++;
        else b++;
    }
    if(!a) return 0;
    if(b<2) return 0;
    return (((b*b) /4)*a);
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
    
    return 0;
}