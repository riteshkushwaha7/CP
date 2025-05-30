#include <bits/stdc++.h>
using namespace std;

int fun() {
    vector<int> v(4);
    for (auto &i : v) cin >> i;
    set <int> st;
    st.insert(v[3]-v[2]);
    st.insert(v[2]-v[1]);
    st.insert(v[0]+v[1]);
    return 4-st.size();
}

int main () {

    int T; 
    cin >> T; 
    while (T--) {
        cout<<fun()<<endl; 
    }
    return 0;
}