#include <bits/stdc++.h>
using namespace std;

bool test(const string& s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(') st.push(c);
        else if (c == ')') {
            if (st.empty()) return false;
            st.pop();
        }
    }
    return st.empty();
}

string solve() {
    string s;
    cin >> s;
    int n = s.size();
    string firstHalf = s.substr(0, n / 2);
    string secondHalf = s.substr(n / 2);

    if (test(firstHalf) && test(secondHalf))
        return "YES";
    else
        return "NO";
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) cout<<solve()<<endl;
    return 0;
}
