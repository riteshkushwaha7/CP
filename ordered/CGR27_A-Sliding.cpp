#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n, m, r, c;
        cin >> n >> m >> r >> c;

        // Calculating the maximum Manhattan distance from (r, c) to all four corners
        long long dist1 = (r - 1) + (c - 1);         // top-left corner (1, 1)
        long long dist2 = (r - 1) + (m - c);         // top-right corner (1, m)
        long long dist3 = (n - r) + (c - 1);         // bottom-left corner (n, 1)
        long long dist4 = (n - r) + (m - c);         // bottom-right corner (n, m)

        // Maximum distance moved by any person
        long long result = max(max(dist1,dist2),max(dist3,dist4));
        
        // Output the result
        cout << result << endl;
    }
    
    return 0;
}
