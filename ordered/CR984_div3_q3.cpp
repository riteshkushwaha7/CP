#include <iostream>
#include <string>

using namespace std;

// Function to check if the substring "1100" is present in the string
bool contains1100(const string &s) {
    return s.find("1100") != string::npos;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; // Number of test cases
    cin >> t;

    while (t--) {
        string s;
        cin >> s; // The binary string
        int q; // Number of queries
        cin >> q;

        // Process each query
        while (q--) {
            int i, v;
            cin >> i >> v; // Read the query
            --i; // Convert to 0-based index
            s[i] = '0' + v; // Update the character

            // Check if "1100" is present after the update
            if (contains1100(s)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
