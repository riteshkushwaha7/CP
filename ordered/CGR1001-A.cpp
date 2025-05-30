#include <bits/stdc++.h>
using namespace std;

int fun() {
    string s;
    cin>>s;
    int ans = 0;
    for(int i = 0; i<s.size(); i++)
    if(s[i]=='1') ans++;
    
	return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        cout << fun() << endl;
    }

    return 0;
}
