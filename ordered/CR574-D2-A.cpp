#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void drinks() {
        int n, k;
        cin >> n >> k;
        vector<int> a(k, 0);
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            a[temp - 1]++;
        }
        sort(a.rbegin(), a.rend());
        int set = round((double)n / 2);
        int i = 0;
        int cnt = 0;
        while (set > 0 && i < k) {
            if (set >= a[i] / 2) {
                set -= a[i] / 2;
                cnt += 2 * (a[i] / 2);
                a[i] %= 2;
            } else {
                cnt += set * 2;
                set = 0;
            }
            i++;
        }
        sort(a.rbegin(), a.rend());
        i = 0;
        while (set > 0 && i < k) {
            if (a[i] == 1) {
                cnt++;
                set--;
            }
            i++;
        }
        cout << cnt << endl;
    }
};

int main() {
    Solution sol;
    sol.drinks();
    return 0;
}
