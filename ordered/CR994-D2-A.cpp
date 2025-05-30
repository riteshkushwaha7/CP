#include<bits/stdc++.h>
using namespace std;

int fun() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int l = 0, r = n - 1;
    while ((a[l] == 0 || a[r] == 0) && l <= r) {
        if (a[l] == 0) l++;
        if (a[r] == 0) r--;
    }
    if (l > r) return 0; 
    vector<int> hash(r - l + 1, 0);
    for (int i = l; i <= r; i++) {
        if (a[i] <= r - l) hash[a[i]]++; 
    }
    int i;
    for (i = 0; i < r - l + 1; i++) { 
        if (hash[i] == 0) break;
    }
    if (i < r - l + 1 && i == 0) return 1; 
    else return 2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << fun() << endl;
    }
}
