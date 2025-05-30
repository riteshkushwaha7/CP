#include <iostream>
#include <unordered_set>
#include <cmath>
using namespace std;

struct hash_pair {
    size_t operator()(const pair<long long, long long>& p) const {
        return hash<long long>()(p.first) ^ hash<long long>()(p.second);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        long long x[n], r[n];

        for (int i = 0; i < n; ++i) cin >> x[i];
        for (int i = 0; i < n; ++i) cin >> r[i];

        unordered_set<pair<long long, long long>, hash_pair> points;

        for (int i = 0; i < n; ++i) {
            long long cx = x[i];
            long long rad = r[i];
            for (long long dx = -rad; dx <= rad; ++dx) {
                long long new_x = cx + dx;
                long long max_y = sqrt(rad * rad - dx * dx);
                for (long long dy = -max_y; dy <= max_y; ++dy) {
                    points.insert({new_x, dy});
                }
            }
        }

        cout << points.size() << "\n";
    }

    return 0;
}
