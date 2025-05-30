#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        
        // Read the grid
        for (int i = 0; i < n; ++i) {
            string row;
            cin >> row;
            for (int j = 0; j < m; ++j) {
                grid[i][j] = row[j] - '0'; // Convert char to int
            }
        }
        
        bool possible = true;
        
        // Check each cell in the grid
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == 1) {
                    // Check left in the same row
                    for (int k = 0; k < j; ++k) {
                        if (grid[i][k] == 1) {
                            possible = false;
                            break;
                        }
                    }
                    // Check above in the same column
                    for (int k = 0; k < i; ++k) {
                        if (grid[k][j] == 1) {
                            possible = false;
                            break;
                        }
                    }
                }
                if (!possible) break;
            }
            if (!possible) break;
        }
        
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}