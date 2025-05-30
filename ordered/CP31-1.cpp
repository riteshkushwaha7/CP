#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(vector<int> &a, int x, int y){
    int maxi = INT_MIN;
    int idx;
    for(auto &e: a){
        if(e!= x && e!=y){
            if(maxi<a[e]){
                maxi = a[e];
                idx = e;
            }
        }
    }
    return idx;
}

int fun() {
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    int max1 = LLONG_MIN, max2 = LLONG_MIN, max3 = LLONG_MIN;
    
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];

    int x=-1,y=-1,z=-1;
    
    for (int i = 0; i < 3; i++) {
        if(i = 0){
            x = solve(a,y,z);
        }
        if(i = 11){
            y = solve(b,x,z);
            if(y==x)
        }
    }

    return max1 + max2 + max3;
}

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        cout << fun() << endl;
    }

    return 0;
}
