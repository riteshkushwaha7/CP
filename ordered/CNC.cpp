#include <iostream>
#include <vector>
#include <algorithm>

void solve() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> heights[i];
    }
    std::sort(heights.begin(), heights.end());
    int max_length = 1, current_length = 1;
    for (int i = 1; i < n; ++i) {
        if (heights[i] - heights[i - 1] <= k) {
            ++current_length;
        } else {
            max_length = std::max(max_length, current_length);
            current_length = 1;
        }
    }
    max_length = std::max(max_length, current_length);
    int min_removals = n - max_length;
    std::cout << min_removals << std::endl;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
