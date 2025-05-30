#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<pair<ll, ll>> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i].first;
        cin >> arr[i].second;
    }

    string ans;
    unordered_set<ll> s;
    unordered_map<ll, ll> mpp;

    for (ll i = 0; i < n; i++) {
        if (arr[i].first == arr[i].second) {
            s.insert(arr[i].first);
            mpp[arr[i].first]++;
        }
    }

    vector<ll> freq;
    for (const auto &val : s) {
        freq.push_back(val);
    }
    sort(freq.begin(), freq.end());

    for (ll i = 0; i < n; i++) {
        ll l = arr[i].first;
        ll r = arr[i].second;

        if (l == r) {
            if (mpp[l] > 1) {
                ans.push_back('0');
            } else {
                ans.push_back('1');
            }
            continue;
        }

        ll lower = lower_bound(freq.begin(), freq.end(), l) - freq.begin();
        ll upper = lower_bound(freq.begin(), freq.end(), r + 1) - freq.begin();
        ll len = (upper - 1) - lower + 1;

        if (len == r - l + 1) {
            ans.push_back('0');
        } else {
            ans.push_back('1');
        }
    }

    cout << ans;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }

    return 0;
}
