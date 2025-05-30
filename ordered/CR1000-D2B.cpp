#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fun() {
    int n, l, r;
    cin >> n >> l >> r;
    l--,r--;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    vector<ll> b,c;
	for(ll i = l; i < n; i++) {
		b.push_back(a[i]);
	}
	for(ll i = 0; i <= r; i++) {
		c.push_back(a[i]);
	}
	sort(b.begin(), b.end());
	sort(c.begin(), c.end());
 
	ll sum1 = accumulate(b.begin(), b.begin() + (int)(r-l+1), 0LL);
	ll sum2 = accumulate(c.begin(), c.begin() + (int)(r-l+1), 0LL);
 
	return min(sum1, sum2);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        cout << fun() << endl;
    }

    return 0;
}
