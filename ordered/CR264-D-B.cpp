#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;
    int energy = 0;
    for (int i = 1; i < n; i++) {
        energy += a[i - 1] - a[i];
        if (energy < 0) {
            ans += abs(energy);  // Add the amount needed to make energy non-negative
            energy = 0;           // Reset energy to 0 as it's non-negative now
        }
    }
    cout << ans << endl;
}
