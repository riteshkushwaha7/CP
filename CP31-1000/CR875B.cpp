#include <bits/stdc++.h>
using namespace std;

void maxStreak(const vector<long long>& arr, unordered_map<long long, long long>& mpp) {
    int cnt = 1;
    mpp[arr[0]] = 1;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] == arr[i - 1]) {
            cnt++;
        } else {
            cnt = 1;
        }
        mpp[arr[i]] = max(mpp[arr[i]], (long long)cnt);
    }
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> v(n), a(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 0; i < n; i++) cin >> a[i];

        unordered_map<long long, long long> vm, am;

        maxStreak(v, vm);
        maxStreak(a, am);

        long long maxi = 0;
        for (auto& it : vm) {
            maxi = max(maxi, it.second + am[it.first]);
        }
        for (auto& it : am) {
            maxi = max(maxi, it.second + vm[it.first]);
        }

        cout << maxi << endl;
    }
    return 0;
}
