#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;

    while (t--) {
        int n, k; 
        cin >> n >> k;
        vector<int> input1(k);  // b values (brands)
        vector<int> input2(k);  // c values (costs)
        
        unordered_map<int, priority_queue<int>> brand_cost_map;

        for (int i = 0; i < k; i++) {
            cin >> input1[i]; // Brand
            cin >> input2[i]; // Cost
            // Store costs in a max heap for each brand
            brand_cost_map[input1[i]].push(input2[i]);
        }

        // Vector to store the highest costs from all brands
        vector<int> all_costs;

        // Collect all maximum costs from each brand's priority queue
        for (const auto& entry : brand_cost_map) {
            // Take the costs from the priority queue
            priority_queue<int> costs = entry.second;
            while (!costs.empty()) {
                all_costs.push_back(costs.top());
                costs.pop();
            }
        }

        // Sort the collected costs in descending order
        sort(all_costs.rbegin(), all_costs.rend());

        // Calculate maximum revenue by using up to 'n' highest costs
        long long max_revenue = 0;
        for (int i = 0; i < min(n, (int)all_costs.size()); i++) {
            max_revenue += all_costs[i];
        }

        // Output the result for this test case
        cout << max_revenue << "\n";
    }

    return 0;
}
